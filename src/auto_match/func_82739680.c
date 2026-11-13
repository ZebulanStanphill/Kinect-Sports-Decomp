/* Leap-year test of the Gregorian calendar; inlined into its caller func_8273B000 by link-time code generation. */
unsigned char fn_82739680(int year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}
