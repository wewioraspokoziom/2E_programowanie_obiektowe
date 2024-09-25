using System;
using System.Diagnostics.CodeAnalysis;
public class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Zadanie 1");
        Console.WriteLine("Witaj Świecie!");

        Console.WriteLine("Zadanie 2");
        string imie = Console.ReadLine();
        Console.WriteLine("Cześć " + imie);

        Console.WriteLine("Zadanie 3");
        string x = Console.ReadLine();
        string y = Console.ReadLine();
       
        var a = Convert.ToDouble(x);
        var b  = Convert.ToDouble(y);
        var c = Convert.ToInt32(a);
        var d = Convert.ToInt32(b);
        Console.WriteLine("Wynik to: " + (c+d));

        Console.WriteLine("Zadanie 4");
        Console.WriteLine("Podaj promień koła");
        var promienk = Console.ReadLine();
        double promien = Convert.ToDouble(promienk);
        Console.WriteLine("Powierzchnia koła wynosi: " + (3.14 * promien * promien));

        Console.WriteLine("Zadanie 5");
        Console.WriteLine("Podaj temperature w stopniach Celsjusza: ");
        var temperaturac = Console.ReadLine();
        double temperaturak = Convert.ToDouble(temperaturac);
        Console.WriteLine("Temperatura w Fahrenheitach wynosi: " + (temperaturak * 9 / 5 + 32));

        Console.WriteLine("Zadanie 6");
        Console.WriteLine("Podaj liczbe calkowita");
        var liczba = Console.ReadLine();
        string ciag = Convert.ToString(liczba);
        Console.WriteLine(ciag);

        Console.WriteLine("Zadanie 7");
        Console.WriteLine("Podaj 2 liczby");
        double liczba1 = int.Parse(Console.ReadLine());
        double liczba2 = int.Parse(Console.ReadLine());
        Console.WriteLine("Ich srednia wynosi: " + ((liczba1+liczba2)/2));

        Console.WriteLine("Zadanie 8");
        Console.WriteLine("Podaj liczbe");
        double kw = int.Parse(Console.ReadLine());
        Console.WriteLine("Kwadrat tej liczby wynosi: " + Math.Pow(kw , 2));

        Console.WriteLine("Zadanie 9");
        float zmienno = float.Parse(Console.ReadLine());
        int zmienna = Convert.ToInt32(zmienno);
        Console.WriteLine(zmienna);


        

    }

}

