using System;

public class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Zadanie 1");
        Console.Write("Podaj liczbę x: ");
        int x =
            Convert.ToInt32(Console.ReadLine());


        Console.Write("Podaj liczbę y: ");
        int y =
            Convert.ToInt32(Console.ReadLine());
        if(x > 0 && y > 0)
        {
            Console.WriteLine("Ćwiartka 1");
        }
        else if (x < 0 && y > 0)
        {
            Console.WriteLine("Ćwiartka 2");
        }
        else if (x < 0 && y < 0)
        {
            Console.WriteLine("Ćwiartka 3");
        }
        else if (x > 0 && y < 0)
        {
            Console.WriteLine("Ćwiartka 4");

        }
        else if (x == 0 && y == 0)
        {
            Console.WriteLine("Nie ma Ćwiartki");
        }


        Console.WriteLine("Zadanie 2");
        Console.WriteLine("Podaj liczbę a: ");
        int a =
            Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Podaj liczbę b: ");
        int b =
            Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Podaj liczbę c: ");
        int c =
            Convert.ToInt32(Console.ReadLine());
        if (a + b > c)
        {
            Console.WriteLine(0.25 * (Math.Sqrt(4 * a * a * b * b - (a * a + b * b - c * c) * (a * a + b * b - c * c))));
        }
        else if (a+b<c)
        {
            Console.WriteLine("Nie istnieje taki trojkata");
        }
        else if (a+b == c)
        {
            Console.WriteLine("Nie istnieje taki trojkata");
        }
        Console.WriteLine("Obwod to: ");
        Console.WriteLine(a + b + c);

        Console.WriteLine("Zadanie 4");
        Console.Write("Podaj pierwsza liczbę: ");
        double liczba1 =
            Convert.ToDouble(Console.ReadLine());
        Console.Write("Podaj druga liczbę: ");
        double liczba2 =
            Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Wybierz jakie dzialanie chcesz wykonac");
        Console.WriteLine("1 - dodawanie");
        Console.WriteLine("2 - odejmowanie");
        Console.WriteLine("3 - mnozenie");
        Console.WriteLine("4 - dzielenie");
        
        int znak =
            Convert.ToInt32(Console.ReadLine());

        if(znak == 1)
        {
            Console.WriteLine(liczba1 + liczba2);
        }
        else if(znak == 2)
        {
            Console.WriteLine(liczba1 - liczba2);

        }
        else if(znak == 3)
        {
            Console.WriteLine(liczba1 * liczba2);
        }
        else if(znak == 4)
           {
            Console.WriteLine(liczba1 / liczba2);
        }
        else
        {
            Console.WriteLine("Twoja cyfra nie znajduje sie w przedziale od 1 do 4");
        }



        switch (znak)
        {
            case 1:
                Console.WriteLine(liczba1 + liczba2);
                break;
           case 2:
                Console.WriteLine(liczba1 - liczba2);
                break;
           case 3:
                Console.WriteLine(liczba1 * liczba2);
                break;
            case 4:
                Console.WriteLine(liczba1 / liczba2);
                break;
        }



    }

}