typedef struct VtS_82536008 { int (*stop)(void *); } VtS_82536008;
typedef struct Snd_82536008 { VtS_82536008 *vt; } Snd_82536008;
typedef struct VtL_82536008 { void *pad[2]; void (*log)(void *, const char *, int, const char *); } VtL_82536008;
typedef struct Log_82536008 { VtL_82536008 *vt; } Log_82536008;
extern Log_82536008 *lbl_8327F868;

void fn_82536008(Snd_82536008 *s)
{
  if (s != 0 && s->vt->stop(s) < 0) {
    lbl_8327F868->vt->log(lbl_8327F868, "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp", 0x7ea, "Stop failed\n");
  }
}
