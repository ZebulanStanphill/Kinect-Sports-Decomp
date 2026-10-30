struct Array_82ED22C0 {
  char pad[0x20];
  int *items;
  unsigned int count;
  void Set(unsigned int i, int v);
};

void Array_82ED22C0::Set(unsigned int i, int v)
{
  unsigned int n;
  if (i <= 0) count = i;
  n = i + 1;
  if (n <= count) n = count;
  count = n;
  items[i] = v;
}
