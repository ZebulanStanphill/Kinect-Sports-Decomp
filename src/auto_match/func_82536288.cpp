#include <algorithm>
#include <vector>

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

struct Obj_82536288 {
  struct VT { int pad[3]; void (*f0c)(Obj_82536288 *, int); } *vt;
  unsigned int id;
};
struct Rec_82536288 {
  int pad[9];
  std::vector<Obj_82536288 *> items;
  int pad2[10];
  unsigned char flag;
};
extern "C" {
Rec_82536288 *fn_822A8D30(void *, AudioVariant_c *);
void fn_82864898(AudioVariant_c *);
extern void *lbl_8327F874;
}

extern "C" void fn_82536288(Obj_82536288 **self)
{
  Obj_82536288 *o = *self;
  if (o != 0) {
    char buf[0x30];
    Rec_82536288 *rec = fn_822A8D30(lbl_8327F874, new (buf) AudioVariant_c(o->id));
    if (rec->flag == 0) {
      std::vector<Obj_82536288 *>::iterator it = std::find(rec->items.begin(), rec->items.end(), o);
      if (it != rec->items.end())
        rec->items.erase(it);
    }
    fn_82864898((AudioVariant_c *)buf);
    if (*self != 0)
      (*self)->vt->f0c(*self, 1);
    *self = 0;
  }
}
