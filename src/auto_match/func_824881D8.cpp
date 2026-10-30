inline void *operator new(unsigned int, void *p) throw() { return p; }
namespace R1 {
namespace Soundscape {
class AudioVariant_c {
public:
  AudioVariant_c(unsigned int id);
  int data[12];
};
}
}
using R1::Soundscape::AudioVariant_c;

struct Mgr_824881D8;
extern "C" {
void *fn_82536CC8(void);
void *fn_822A8D30(void *, const AudioVariant_c *);
void fn_822A8A50(void *, AudioVariant_c *);
AudioVariant_c *fn_82864988(AudioVariant_c *, const char *);
void fn_82864898(AudioVariant_c *);
int fn_825529B0(void *);
void fn_82552B50(void *, int);
void fn_82230300(void *, int, int);
extern void *lbl_8327F874;
extern char lbl_821BE980[];
extern char lbl_821C2CCC[];
}

struct Obj_824881D8 {
  void *vt;
  int pad0[2];
  int sub[0x1c - 3];
};

extern "C" void fn_824881D8(int *param_1)
{
  char buf1[0x30];
  char buf2[0x30];
  AudioVariant_c *a = (AudioVariant_c *)buf1;
  AudioVariant_c *b = (AudioVariant_c *)buf2;
  void *mgr;
  void *r;
  AudioVariant_c *t;
  *(void **)param_1 = lbl_821BE980;
  new (a) AudioVariant_c(*(unsigned int *)(param_1[10] + 0x84c));
  if (lbl_8327F874 == 0) {
    lbl_8327F874 = fn_82536CC8();
  }
  mgr = lbl_8327F874;
  t = fn_82864988(b, "music_frontend.bnk");
  r = fn_822A8D30(mgr, a);
  if (r != 0) {
    fn_822A8A50(r, t);
  }
  fn_82864898(b);
  if (fn_825529B0(param_1 + 0x19) != 0) {
    fn_82552B50(param_1 + 0x19, 1);
  }
  fn_82864898(a);
  *(void **)param_1 = lbl_821C2CCC;
  fn_82230300(param_1 + 3, 1, 0);
}
