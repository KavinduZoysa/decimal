import java.math.BigDecimal;
import java.math.MathContext;
public class BigDecimalExample
{
    private static final BigDecimal MIN_MAGNITUDE = new BigDecimal("1E-6143");
    public static void main(String[] args)
    {
        // Create two new BigDecimals
        BigDecimal bd1 = new BigDecimal("9.999999999999999999999999999999999E-6001", MathContext.DECIMAL128);
        BigDecimal bd2 = new BigDecimal("1E-143", MathContext.DECIMAL128);

        // Multiplication of two BigDecimals
        bd1 = bd1.multiply(bd2, MathContext.DECIMAL128);
        System.out.println("Result = " + bd1);

        if (bd1.compareTo(MIN_MAGNITUDE) >= 0) {
                System.out.println("Not a subnormal");
        }
        else {
                // We can return zero here
                System.out.println("subnormal");
        }
    }
}
