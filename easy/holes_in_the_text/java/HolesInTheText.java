import java.io.InputStreamReader;
import java.util.Scanner;

public class Main
{
	public static void main(String args[])
	{
		Scanner scanner = new Scanner(new InputStreamReader(System.in));
		int n = scanner.nextInt();
		scanner.nextLine();
		while (n > 0)
		{
			String line = scanner.nextLine();
			System.out.println(countHoles(line));
			n--;
		} 
	}

	private static int countHoles(String line)
	{
		int count = 0;
		for (char c : line.toCharArray())
		{
			if (c == 'A' || c == 'D' || c == 'O' || c == 'P' || c == 'Q' || c == 'R')
			{
				count++;
			}
			else if (c == 'B')
			{
				count += 2;
			}
		}
		return count;
	}
}