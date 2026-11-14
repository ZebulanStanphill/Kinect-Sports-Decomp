/* Cuts the string at its first '.'. */
void fn_828768E0(char *text)
{
  while (*text != 0) {
    if (*text == '.') {
      *text = 0;
      return;
    }
    text++;
  }
}
