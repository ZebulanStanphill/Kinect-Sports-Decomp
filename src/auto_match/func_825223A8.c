extern int fn_823AB478();
extern int lbl_832767C8;


void fn_825223A8(int param_1, unsigned int param_2)
{
  if (param_2 == 0 || param_2 == 2) {
    int g = lbl_832767C8;
    *(unsigned char *)(fn_823AB478() + g + 0x74) = 1;
  } else if (param_2 == 0x48f) {
    int g = lbl_832767C8;
    *(unsigned char *)(fn_823AB478() + g + 0x84) = 1;
  } else {
    int g = lbl_832767C8;
    *(unsigned char *)(fn_823AB478() + g + 0x78) = 1;
  }
}
