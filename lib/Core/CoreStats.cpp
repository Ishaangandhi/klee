//===-- CoreStats.cpp -----------------------------------------------------===//
//
//                     The KLEE Symbolic Virtual Machine
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "CoreStats.h"

using namespace klee;

Statistic stats::numRet("Returns", "rets");
Statistic stats::numBr("Breaks", "brs");
Statistic stats::numSwitch("Switchs", "switchs");
Statistic stats::numIndirectBr("IndirectBrs", "indirectbrs");
Statistic stats::numInvoke("Invokes", "invokes");
Statistic stats::numResume("Resumes", "resumes");
Statistic stats::numUnreachable("Unreachables", "unreachables");
Statistic stats::numCleanupRet("CleanupRets", "cleanuprets");
Statistic stats::numCatchRet("CatchRets", "catchrets");
Statistic stats::numCatchPad("CatchPads", "catchpads");
Statistic stats::numFNeg("FNegs", "fnegs");
Statistic stats::numCatchSwitch("CatchSwitchs", "catchswitchs");
Statistic stats::numAdd("Adds", "adds");
Statistic stats::numFAdd("FAdds", "fadds");
Statistic stats::numSub("Subs", "subs");
Statistic stats::numFSub("FSubs", "fsubs");
Statistic stats::numMul("Muls", "muls");
Statistic stats::numFMul("FMuls", "fmuls");
Statistic stats::numUDiv("UDivs", "udivs");
Statistic stats::numSDiv("SDivs", "sdivs");
Statistic stats::numFDiv("FDivs", "fdivs");
Statistic stats::numURem("URems", "urems");
Statistic stats::numSRem("SRems", "srems");
Statistic stats::numFRem("FRems", "frems");
Statistic stats::numAnd("Ands", "ands");
Statistic stats::numOr("Ors", "ors");
Statistic stats::numXor("Xors", "xors");
Statistic stats::numAlloca("Allocas", "allocas");
Statistic stats::numLoad("Loads", "loads");
Statistic stats::numStore("Stores", "stores");
Statistic stats::numAtomicCmpXchg("AtomicCmpXchgs", "atomiccmpxchgs");
Statistic stats::numAtomicRMW("AtomicRMWs", "atomicrmws");
Statistic stats::numFence("Fences", "fences");
Statistic stats::numGetElementPtr("GetElementPtrs", "getelementptrs");
Statistic stats::numTrunc("Truncs", "truncs");
Statistic stats::numZExt("ZExts", "zexts");
Statistic stats::numSExt("SExts", "sexts");
Statistic stats::numFPTrunc("FPTruncs", "fptruncs");
Statistic stats::numFPExt("FPExts", "fpexts");
Statistic stats::numFPToUI("FPToUIs", "fptouis");
Statistic stats::numFPToSI("FPToSIs", "fptosis");
Statistic stats::numUIToFP("UIToFPs", "uitofps");
Statistic stats::numSIToFP("SIToFPs", "sitofps");
Statistic stats::numIntToPtr("IntToPtrs", "inttoptrs");
Statistic stats::numPtrToInt("PtrToInts", "ptrtoints");
Statistic stats::numBitCast("BitCasts", "bitcasts");
Statistic stats::numAddrSpaceCast("AddrSpaceCasts", "addrspacecasts");
Statistic stats::numICmp("ICmps", "icmps");
Statistic stats::numFCmp("FCmps", "fcmps");
Statistic stats::numPHI("PHIs", "phis");
Statistic stats::numSelect("Selects", "selects");
Statistic stats::numCall("Calls", "calls");
Statistic stats::numShl("Shls", "shls");
Statistic stats::numLShr("LShrs", "lshrs");
Statistic stats::numAShr("AShrs", "ashrs");
Statistic stats::numVAArg("VAArgs", "vaargs");
Statistic stats::numExtractElement("ExtractElements", "extractelements");
Statistic stats::numInsertElement("InsertElements", "insertelements");
Statistic stats::numShuffleVector("ShuffleVectors", "shufflevectors");
Statistic stats::numExtractValue("ExtractValues", "extractvalues");
Statistic stats::numInsertValue("InsertValues", "insertvalues");
Statistic stats::numLandingPad("LandingPads", "landingpads");
Statistic stats::numCleanupPad("CleanupPads", "cleanuppads");

Statistic stats::allocations("Allocations", "Alloc");
Statistic stats::coveredInstructions("CoveredInstructions", "Icov");
Statistic stats::falseBranches("FalseBranches", "Bf");
Statistic stats::forkTime("ForkTime", "Ftime");
Statistic stats::forks("Forks", "Forks");
Statistic stats::instructionRealTime("InstructionRealTimes", "Ireal");
Statistic stats::instructionTime("InstructionTimes", "Itime");
Statistic stats::instructions("Instructions", "I");
Statistic stats::minDistToReturn("MinDistToReturn", "Rdist");
Statistic stats::minDistToUncovered("MinDistToUncovered", "UCdist");
Statistic stats::reachableUncovered("ReachableUncovered", "IuncovReach");
Statistic stats::resolveTime("ResolveTime", "Rtime");
Statistic stats::solverTime("SolverTime", "Stime");
Statistic stats::states("States", "States");
Statistic stats::trueBranches("TrueBranches", "Bt");
Statistic stats::uncoveredInstructions("UncoveredInstructions", "Iuncov");
