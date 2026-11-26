#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpRigidBody.h"
struct ContactAtom { hkUint16 type, size; char pad[12]; struct Info { hkUint16 count,flags; hkUint32 data[7]; HK_FORCE_INLINE void init() { count=0;flags=3;for(int i=0;i<7;i++)data[i]=0; } } info; };
extern "C" ContactAtom *fn_82DC74A8(int,int,int,hkUint16);
class hkpSimpleContactConstraintData : public hkpConstraintData { public:
 hkpSimpleContactConstraintData(hkpConstraintInstance *,hkpRigidBody *,hkpRigidBody *);
 hkInplaceArray<hkUint8,8> ids;
 unsigned pad; hkpConstraintInstance *constraint;
 ContactAtom *atom;
 int size;
};
hkpSimpleContactConstraintData::hkpSimpleContactConstraintData(hkpConstraintInstance *c, hkpRigidBody *a,
                                                               hkpRigidBody *b) : constraint(c) {
 int na = a->m_numShapeKeysInContactPointProperties, nb = b->m_numShapeKeysInContactPointProperties;
 ContactAtom *p=atom=fn_82DC74A8(1,na,nb,0x3400/((na+nb+13)*4));
 ContactAtom::Info *info=&p->info; info->count=0;info->flags=3;for(int i=0;i<7;i++)info->data[i]=0;
 size=atom->size;
}
