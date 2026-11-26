#include "havok/hkBase.h"
#include "havok/hkpSimpleContactConstraintData.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpSimpleContactConstraintAtom.h"
struct ContactAtom { hkUint16 type, size; char pad[12]; struct Info { hkUint16 count,flags; hkUint32 data[7]; HK_FORCE_INLINE void init() { count=0;flags=3;for(int i=0;i<7;i++)data[i]=0; } } info; };
extern "C" hkpSimpleContactConstraintAtom *fn_82DC74A8(int,int,int,hkUint16);
hkpSimpleContactConstraintData::hkpSimpleContactConstraintData(hkpConstraintInstance *c, hkpRigidBody *a,
                                                               hkpRigidBody *b) : m_constraint(c) {
 int na = a->m_numShapeKeysInContactPointProperties, nb = b->m_numShapeKeysInContactPointProperties;
 ContactAtom *p=reinterpret_cast<ContactAtom *>(m_atom=fn_82DC74A8(1,na,nb,0x3400/((na+nb+13)*4)));
 ContactAtom::Info *info=&p->info; info->count=0;info->flags=3;for(int i=0;i<7;i++)info->data[i]=0;
 m_atomSize=m_atom->m_sizeOfAllAtoms;
}
