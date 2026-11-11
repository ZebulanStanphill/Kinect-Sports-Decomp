typedef void (*Callback_829D2980)(void);
extern Callback_829D2980 lbl_832178EC;

void fn_829D2980(void)
{
  Callback_829D2980 callback = lbl_832178EC;
  if (callback != 0) {
    callback();
  }
}
