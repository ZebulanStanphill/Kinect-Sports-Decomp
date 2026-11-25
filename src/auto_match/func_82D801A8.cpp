// hkpGenericConstraintDataScheme::~hkpGenericConstraintDataScheme (Physics/Dynamics/Constraint/ConstraintKit/
// hkpGenericConstraintScheme.h): empty; the four hkArray members are destroyed in reverse order.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpConstraintModifier;
class hkpConstraintMotor;

class hkpGenericConstraintDataScheme {
public:
    struct Info {
        int m_sizeOfSchemas;
        int m_maxSizeOfSchema;
        int m_numSolverResults;
        int m_numSolverElemTemps;
    };
    ~hkpGenericConstraintDataScheme();

    Info m_info;                                  // +0x00
    hkArray<hkVector4> m_data;                    // +0x10
    hkArray<int> m_commands;                      // +0x1c
    hkArray<hkpConstraintModifier *> m_modifiers; // +0x28
    hkArray<hkpConstraintMotor *> m_motors;       // +0x34
};

hkpGenericConstraintDataScheme::~hkpGenericConstraintDataScheme()
{
}
