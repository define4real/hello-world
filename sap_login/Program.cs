﻿using System;
using System.Linq;
using System.CodeDom;
using SAPGuiAutomationLib;
using System.Reflection;
using System.CodeDom.Compiler;
using System.IO;
using SAPAutomation;

namespace SAPLibTools
{
    class Program
    {
        static void Main(string[] args)
        {
            //Create a SAPLogon object
            SAPLogon logon = new SAPLogon();

            //Start the sap gui process
            logon.StartProcess(@"C:\Program Files (x86)\SAP\FrontEnd\SapGui\saplogon.exe");

            //connect to server
            logon.OpenConnection("test");

            //login
            logon.Login("Y051", "123456789001", "100", "ZH");
            return;
            CodeGenerateHelper helper = new CodeGenerateHelper();
            
            foreach (var item in helper.GetFindChildByPropertyMethods())
            {
                helper.TargetClass.Members.Add(item);
            }
            DisplayCode(helper.Unit);



           // CodeMethodReturnStatement returnStatement = new CodeMethodReturnStatement();
           // CodeMemberMethod method = new CodeMemberMethod();
           // CodeTypeParameter tpPara = new CodeTypeParameter("TReturn");
           // tpPara.Constraints.Add(new CodeTypeReference(" class",CodeTypeReferenceOptions.GenericTypeParameter));
           // method.TypeParameters.Add(tpPara);

           // tpPara = new CodeTypeParameter("TInput");
           // tpPara.Constraints.Add(new CodeTypeReference(" class", CodeTypeReferenceOptions.GenericTypeParameter));
           // method.TypeParameters.Add(tpPara);


            
           // method.Name = "findByNameTemplate";
           // method.Attributes = MemberAttributes.Static | MemberAttributes.Private;
           // method.ReturnType = new CodeTypeReference("TReturn");
           // method.Parameters.Add(new CodeParameterDeclarationExpression(new CodeTypeReference("TInput"), "Container"));
           // method.Parameters.Add(new CodeParameterDeclarationExpression(new CodeTypeReference(typeof(string)), "Name"));
            
           // CodeConditionStatement conditionalStatement = new CodeConditionStatement(
           //     // The condition to test. 

           //    new CodeSnippetExpression("Container is GuiVContainer"),
           
           //     // The statements to execute if the condition evaluates to true. 
           //new CodeStatement[] { 
           //    new CodeSnippetStatement("var container = Container as GuiVContainer;")
           //   ,new CodeSnippetStatement("TReturn item = container.FindByName(Name, typeof(TReturn).Name) as TReturn;")
           //   ,new CodeSnippetStatement("return item;")},
           //     // The statements to execute if the condition evalues to false. 
           //new CodeStatement[] { new CodeSnippetStatement("throw new Exception(\"Not Found FindByName method in type:\" + typeof(TInput).Name);") });
           

           // method.Statements.Add(conditionalStatement);
           // //DisplayCode(method);

           // Console.ReadLine();

           

        }

        static void DisplayCode(CodeCompileUnit unit)
        {
            CodeDomProvider provider = CodeDomProvider.CreateProvider("c#");
            CodeGeneratorOptions options = new CodeGeneratorOptions();
            options.BracingStyle = "c";
            FileStream fs = new FileStream("Sample.cs", FileMode.Create);
            using (StreamWriter sourceWriter = new StreamWriter(fs))
            {
                
                provider.GenerateCodeFromCompileUnit(
                    unit, sourceWriter, options);
            }
            fs.Close();
            fs.Dispose();
        }

        static void FindByNameGenerate()
        {

            SAPAutomationHelper.Current.SetSAPApiAssembly();
            Assembly asm = SAPAutomationHelper.Current.SAPGuiApiAssembly;
            var interfaces = asm.GetTypes().Where(t => t.IsInterface && t.Name.StartsWith("Gui") && t.GetInterfaces()[0].GetMethod("FindByName") != null);

            foreach (Type t in interfaces)
            {

                Console.WriteLine(t.Name);
            }
            Console.ReadLine();
        }
    }
}
