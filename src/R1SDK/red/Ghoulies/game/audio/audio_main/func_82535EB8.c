typedef struct Apply Apply;
typedef struct { void *f0; void *f4; void *f8; int (*fc)(Apply *, void *); } ApplyVt;
struct Apply { ApplyVt *vt; };
typedef struct Log Log;
typedef struct { void *f0; void *f4; void (*f8)(Log *, const char *, int, const char *); } LogVt;
struct Log { LogVt *vt; };
extern void fn_82292780(void *, unsigned);
extern void fn_82864898(void *);
extern Apply *lbl_8327F864;
extern Log *lbl_8327F868;
extern unsigned lbl_8326AF50;

void fn_82535EB8(unsigned char flag)
{
  char buf[0x20];
  unsigned id;
  if (flag != 0) {
    id = lbl_8326AF50;
  } else {
    id = lbl_8326AF50 + 0x24;
  }
  fn_82292780(buf, id);
  if (lbl_8327F864->vt->fc(lbl_8327F864, buf) < 0) {
    lbl_8327F868->vt->f8(lbl_8327F868, "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp", 0x524, "Failed to apply Pause/Unpause, check that project has these events and that WWISEAUDIO::KeyDefaultEvents contains them\n");
  }
  fn_82864898(buf);
}
