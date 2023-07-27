// created by RAHUL SHAW

    

import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
    /*
    See the input carefully and output also, I want to like this:
    
  
    Input: 
    5
    Output:
    5 * 1 = 5
    5 * 2 = 10
    5 * 3 = 15
    5 * 4 = 20
    5 * 5 = 25
    5 * 6 = 30
    5 * 7 = 35
    5 * 8 = 40
    5 * 9 = 45
    5 * 10 = 50
    */
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    
    for(int i=1;i<=10;i++)
    {
        System.out.println(num+i+" = "+(i*i));
    }
        
    }
      }
