struct Grid_82D02708 {
  char busy;
  char pad[3];
  int count;
  char flag;
  char cells[1];
  int Claim(int idx);
};

int Grid_82D02708::Claim(int idx)
{
  if (busy != 0 && flag != 0)
    return 0;
  if (count > 0x32) {
    if (count % 3 == 0 && flag != 0 && cells[idx] == 0) {
      cells[idx] = 1;
      busy = 1;
      return 0;
    }
  }
  return 1;
}
