using System;
public class Program
{
    public static void Main(string[] arqs)
    {
        Console.WriteLine("Zadanie 1");
        double pi = 3.14;
        Console.WriteLine(pi);

        Console.WriteLine("Zadanie 2");
        string imie = "Maciej";
        string nazwisko = "Stepien";
        Console.WriteLine(imie + " " + nazwisko);

        Console.WriteLine("Zadanie 3");
        int x = 10;
        double y = Convert.ToDouble(x);
        Console.WriteLine(y);

        Console.WriteLine("Zadanie 4");
        double a = 10.78493;
        int b = Convert.ToInt32(a);
        Console.WriteLine(b);

        Console.WriteLine("Zadanie 5");
        Console.WriteLine("Podaj napis");
        string napis = Console.ReadLine();
        Console.WriteLine(napis);
    }
}
