double sin_taylor_series_to_n_terms(double x, int n)
{
    int sign = -1;
    double result = x;
    double common = x;
    double xPoweredTo2 = x * x;

    for (int i = 1; i < n; i++) {
        double denominator = 4 * i * i + 2 * i;
        double fraction = xPoweredTo2/denominator;
        result += sign * (common * fraction);
        common *= fraction;
        sign *= -1;
    }

    return result;
}