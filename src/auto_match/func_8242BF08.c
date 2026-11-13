extern const float lbl_82193AD8[];

/* Converts a value in hundredths to a float (lbl_82193AD8[6] is 0.01f). */
float fn_8242BF08(void *self, unsigned int value)
{
    return (float)value * lbl_82193AD8[6];
}
