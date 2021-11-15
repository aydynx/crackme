using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace crackme
{
    class Program
    {
        static void Main(string[] args)
        {
            string password = "crackme";
            Console.WriteLine("password: ");
            string userInput = Console.ReadLine();
            if (userInput == password)
            {
                Console.WriteLine("success!");
            } else { Console.WriteLine("fail."); }
        }
    }
}