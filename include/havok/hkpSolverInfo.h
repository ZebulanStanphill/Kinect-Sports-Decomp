// hkpSolverInfo (Physics/ConstraintSolver/Solve/hkpSolverInfo.h), 0x130 bytes, 16-aligned: the solver's
// settings for one step, and hkpWorldDynamicsStepInfo (0x140 bytes), the hkStepInfo followed by it, which
// is hkpWorld's m_dynamicsStepInfo at +0x1D0 (the solver info at +0x1E0).
//
// Layout from hkpWorld's constructor (fn_82D86990), which fills the world's copy from hkpWorldCinfo:
//  +0x0 1.0; +0x4 the cinfo's solver tau (+0x78); +0x8 its damping (+0x7C); +0xC tau * 0.5;
//  +0x30, +0x40 two vectors (stvx); +0x50 damp / tau, +0x54 tau / damp, +0x58 damp / (tau * 0.5),
//  +0x5C (tau * 0.5) / damp; +0x60 the cinfo's contact resting velocity (+0x24);
//  +0x64 six 0x1C-byte deactivation entries, filled by a loop over the six deactivation classes from the
//  gravity and the cinfo's collision tolerance (+0xA4): four reals, two squared distances (r^2, (4r)^2) and
//  two halves ((2r)^2, (8r)^2 stored as the high 16 bits of a float);
//  +0x10C, +0x110 cleared; +0x114 the cinfo's numSteps (+0x80), +0x118 numMicroSteps (+0x84), +0x11C and
//  +0x120 their inverses; +0x124 a byte (+0x88); +0x125, +0x126, +0x127 the deactivation selectors and
//  counter (+0xA0..+0xA2), read by hkpEntity::activate (82D89BD8) and 82D8F080.
// The members at +0x10 and +0x20 (the gravity per sub-step and per step) are not written by the
// constructor; +0x128..+0x12F is not written by it either and no unit reads it, so it stays padding.
// The names follow Havok's header, whose members are the same in this order.
#ifndef HAVOK_HKPSOLVERINFO_H
#define HAVOK_HKPSOLVERINFO_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkHalf.h"
#include "havok/hkStepInfo.h"

struct hkpSolverInfo {
    // The deactivation classes the loop in hkpWorld's constructor runs over (6).
    enum DeactivationClass {
        DEACTIVATION_CLASS_INVALID,
        DEACTIVATION_CLASS_OFF,
        DEACTIVATION_CLASS_LOW,
        DEACTIVATION_CLASS_MEDIUM,
        DEACTIVATION_CLASS_HIGH,
        DEACTIVATION_CLASS_AGGRESSIVE,
        DEACTIVATION_CLASSES_END
    };

    struct DeactivationInfo {
        hkReal m_linearVelocityThresholdInv;       // +0x0
        hkReal m_angularVelocityThresholdInv;      // +0x4
        hkReal m_slowObjectVelocityMultiplier;     // +0x8
        hkReal m_relativeSleepVelocityThreshold;   // +0xC
        hkReal m_maxDistSqrd[2];                   // +0x10
        hkHalf m_maxRotSqrd[2];                    // +0x18
    };

    hkReal m_one;                                  // +0x0 (the class is 16-aligned by its vectors)
    hkReal m_tau;                                  // +0x4
    hkReal m_damping;                              // +0x8
    hkReal m_frictionTau;                          // +0xC
    hkVector4 m_globalAccelerationPerSubStep;      // +0x10
    hkVector4 m_globalAccelerationPerStep;         // +0x20
    hkVector4 m_integrateVelocityFactor;           // +0x30
    hkVector4 m_invIntegrateVelocityFactor;        // +0x40
    hkReal m_dampDivTau;                           // +0x50
    hkReal m_tauDivDamp;                           // +0x54
    hkReal m_dampDivFrictionTau;                   // +0x58
    hkReal m_frictionTauDivDamp;                   // +0x5C
    hkReal m_contactRestingVelocity;               // +0x60
    DeactivationInfo m_deactivationInfo[DEACTIVATION_CLASSES_END];   // +0x64
    hkReal m_deltaTime;                            // +0x10C
    hkReal m_invDeltaTime;                         // +0x110
    int m_numSteps;                                // +0x114
    int m_numMicroSteps;                           // +0x118
    hkReal m_invNumMicroSteps;                     // +0x11C
    hkReal m_invNumSteps;                          // +0x120
    hkBool m_forceCoherentConstraintOrderingInSolver;           // +0x124
    hkUint8 m_deactivationNumInactiveFramesSelectFlag[2];       // +0x125
    hkUint8 m_deactivationIntegrateCounter;                     // +0x127
    hkUint8 m_pad128[8];                           // +0x128: not written by the world's constructor
};

// hkpWorld::m_dynamicsStepInfo (+0x1D0): the constructor fills the step info at +0x1D0..+0x1DC and the
// solver info from +0x1E0; the world's process collision input points at it (+0x68).
struct hkpWorldDynamicsStepInfo {
    hkStepInfo m_stepInfo;         // +0x0
    hkpSolverInfo m_solverInfo;    // +0x10
};

#endif
