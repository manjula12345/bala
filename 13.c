import java.text.NumberFormat;

public class NumberToWordsConverter
{

	public static final String[] units = { "", "One", "Two", "Three", "Four",
			"Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
			"Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
			"Eighteen", "Nineteen" };

	public static final String[] tens = { 
			"", 		
			"",		
			"Twenty", 	
			"Thirty",
			"Forty",
			"Fifty",
			"Sixty", 	
			"Seventy",	
			"Eighty", 	
			"Ninety" 	
	};

	public static String convert(final int a) 
  {
		if (a < 0) {
			return "Minus " + convert(-a);
		}

		if (a < 20) {
			return units[a];
		}

		if (a < 100) {
			return tens[a / 10] + ((a % 10 != 0) ? " " : "") + units[a % 10];
		}

		if (a < 1000) {
			return units[a / 100] + " Hundred" + ((a % 100 != 0) ? " " : "") + convert(a % 100);
		}

		if (a < 100000) {
			return convert(a / 1000) + " Thousand" + ((a % 10000 != 0) ? " " : "") + convert(a % 1000);
		}

		if (a < 10000000) {
			return convert(a / 100000) + " Lakh" + ((a % 100000 != 0) ? " " : "") + convert(n % 100000);
		}

		return convert(a / 10000000) + " Crore" + ((a % 10000000 != 0) ? " " : "") + convert(a % 10000000);
	}

	public static void main(final String[] args) {

		int a;

		a = 5;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");

		a = 16;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");

		a = 50;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");

		a = 78;
		System.out.println(NumberFormat.getInstance().format(n) + "='" + convert(n) + "'");

		a = 456;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");

		a = 1000;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");

		a = 99999;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");

		a = 199099;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");

		a = 10005000;
		System.out.println(NumberFormat.getInstance().format(a) + "='" + convert(a) + "'");
	}
  }
