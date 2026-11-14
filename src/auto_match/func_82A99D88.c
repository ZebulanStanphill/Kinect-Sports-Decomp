extern void fn_82A99B70(void *out, const char *format, ...);

void fn_82A99D88(void *out, const char *name, const char *value)
{
  const char *p;
  fn_82A99B70(out, " %s=\"", name);
  for (p = value; *p != 0; p++) {
    char c = *p;
    switch (c) {
    case '<':
      fn_82A99B70(out, "&lt;");
      break;
    case '>':
      fn_82A99B70(out, "&gt;");
      break;
    case '&':
      fn_82A99B70(out, "&amp;");
      break;
    case '\'':
      fn_82A99B70(out, "&apos;");
      break;
    case '"':
      fn_82A99B70(out, "&quot;", c);
      break;
    default:
      fn_82A99B70(out, "%c", c);
      break;
    }
  }
  fn_82A99B70(out, "\"");
}
