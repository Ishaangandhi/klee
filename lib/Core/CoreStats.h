//===-- CoreStats.h ---------------------------------------------*- C++ -*-===//
//
//                     The KLEE Symbolic Virtual Machine
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef KLEE_CORESTATS_H
#define KLEE_CORESTATS_H

#include "klee/Statistic.h"

namespace klee {
namespace stats {

  extern Statistic numRet;
  extern Statistic numBr;
  extern Statistic numSwitch;
  extern Statistic numIndirectBr;
  extern Statistic numInvoke;
  extern Statistic numResume;
  extern Statistic numUnreachable;
  extern Statistic numCleanupRet;
  extern Statistic numCatchRet;
  extern Statistic numCatchPad;
  extern Statistic numCatchSwitch;
  extern Statistic numFNeg;
  extern Statistic numAdd;
  extern Statistic numFAdd;
  extern Statistic numSub;
  extern Statistic numFSub;
  extern Statistic numMul;
  extern Statistic numFMul;
  extern Statistic numUDiv;
  extern Statistic numSDiv;
  extern Statistic numFDiv;
  extern Statistic numURem;
  extern Statistic numSRem;
  extern Statistic numFRem;
  extern Statistic numAnd;
  extern Statistic numOr;
  extern Statistic numXor;
  extern Statistic numAlloca;
  extern Statistic numLoad;
  extern Statistic numStore;
  extern Statistic numAtomicCmpXchg;
  extern Statistic numAtomicRMW;
  extern Statistic numFence;
  extern Statistic numGetElementPtr;
  extern Statistic numTrunc;
  extern Statistic numZExt;
  extern Statistic numSExt;
  extern Statistic numFPTrunc;
  extern Statistic numFPExt;
  extern Statistic numFPToUI;
  extern Statistic numFPToSI;
  extern Statistic numUIToFP;
  extern Statistic numSIToFP;
  extern Statistic numIntToPtr;
  extern Statistic numPtrToInt;
  extern Statistic numBitCast;
  extern Statistic numAddrSpaceCast;
  extern Statistic numICmp;
  extern Statistic numFCmp;
  extern Statistic numPHI;
  extern Statistic numSelect;
  extern Statistic numCall;
  extern Statistic numShl;
  extern Statistic numLShr;
  extern Statistic numAShr;
  extern Statistic numVAArg;
  extern Statistic numExtractElement;
  extern Statistic numInsertElement;
  extern Statistic numShuffleVector;
  extern Statistic numExtractValue;
  extern Statistic numInsertValue;
  extern Statistic numLandingPad;
  extern Statistic numCleanupPad;

  extern Statistic allocations;
  extern Statistic resolveTime;
  extern Statistic instructions;
  extern Statistic instructionTime;
  extern Statistic instructionRealTime;
  extern Statistic coveredInstructions;
  extern Statistic uncoveredInstructions;  
  extern Statistic trueBranches;
  extern Statistic falseBranches;
  extern Statistic forkTime;
  extern Statistic solverTime;

  /// The number of process forks.
  extern Statistic forks;

  /// Number of states, this is a "fake" statistic used by istats, it
  /// isn't normally up-to-date.
  extern Statistic states;

  /// Instruction level statistic for tracking number of reachable
  /// uncovered instructions.
  extern Statistic reachableUncovered;

  /// Instruction level statistic tracking the minimum intraprocedural
  /// distance to an uncovered instruction; this is only periodically
  /// updated.
  extern Statistic minDistToUncovered;

  /// Instruction level statistic tracking the minimum intraprocedural
  /// distance to a function return.
  extern Statistic minDistToReturn;

}
}

#endif /* KLEE_CORESTATS_H */
