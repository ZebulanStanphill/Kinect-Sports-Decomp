/* Two handles are equal when both are empty, or both are set to the same value. */
unsigned char fn_825200A8(int *a, int *b)
{
  int hasA = *a != 0;
  int hasB = *b != 0;
  if (!hasA && !hasB) return 1;
  if (hasA && hasB) return *a == *b;
  return 0;
}
