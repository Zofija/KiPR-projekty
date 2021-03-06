/*
 * SCARA_215.h
 *
 * Code generation for model "SCARA_215".
 *
 * Model version              : 1.36
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Mon Apr 16 15:23:30 2018
 *
 * Target selection: rti1104.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SCARA_215_h_
#define RTW_HEADER_SCARA_215_h_
#include <math.h>
#include <string.h>
#ifndef SCARA_215_COMMON_INCLUDES_
# define SCARA_215_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif                                 /* SCARA_215_COMMON_INCLUDES_ */

#include "SCARA_215_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define SCARA_215_rtModel              RT_MODEL_SCARA_215_T

/* Block signals (auto storage) */
typedef struct {
  real_T SFunction1;                   /* '<S7>/S-Function1' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Memory1;                      /* '<S14>/Memory1' */
  real_T DataStoreRead6;               /* '<Root>/Data Store Read6' */
  real_T Memory3;                      /* '<S31>/Memory3' */
  real_T Switch7;                      /* '<S5>/Switch7' */
  real_T DataStoreRead5;               /* '<Root>/Data Store Read5' */
  real_T Memory3_c;                    /* '<S30>/Memory3' */
  real_T Switch8;                      /* '<S5>/Switch8' */
  real_T Product2;                     /* '<S28>/Product2' */
  real_T Product2_b;                   /* '<S29>/Product2' */
  real_T Add1;                         /* '<S5>/Add1' */
  real_T Sqrt;                         /* '<S5>/Sqrt' */
  real_T Memory4;                      /* '<S5>/Memory4' */
  real_T Switch1;                      /* '<S5>/Switch1' */
  real_T poprzednia_x;                 /* '<S5>/poprzednia_x' */
  real_T Switch;                       /* '<S5>/Switch' */
  real_T Product2_l;                   /* '<S25>/Product2' */
  real_T Product2_h;                   /* '<S26>/Product2' */
  real_T Product2_e;                   /* '<S23>/Product2' */
  real_T Product2_o;                   /* '<S24>/Product2' */
  real_T Add;                          /* '<S5>/Add' */
  real_T Product4;                     /* '<S5>/Product4' */
  real_T L;                            /* '<S5>/L' */
  real_T Product2_p;                   /* '<S27>/Product2' */
  real_T Add2;                         /* '<S5>/Add2' */
  real_T Sqrt1;                        /* '<S5>/Sqrt1' */
  real_T DataStoreRead1;               /* '<S5>/Data Store Read1' */
  real_T Switch2;                      /* '<S5>/Switch2' */
  real_T TrigonometricFunction;        /* '<S5>/Trigonometric Function' */
  real_T Switch9;                      /* '<Root>/Switch9' */
  real_T Memory3_h;                    /* '<S16>/Memory3' */
  real_T Switch8_b;                    /* '<Root>/Switch8' */
  real_T Switch_i;                     /* '<S14>/Switch' */
  real_T Switch1_b;                    /* '<S14>/Switch1' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T Abs;                          /* '<S18>/Abs' */
  real_T SFunction1_h;                 /* '<S3>/S-Function1' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T Memory1_k;                    /* '<S15>/Memory1' */
  real_T Switch10;                     /* '<Root>/Switch10' */
  real_T Memory3_n;                    /* '<S17>/Memory3' */
  real_T Switch1_i;                    /* '<Root>/Switch1' */
  real_T Switch_iq;                    /* '<S15>/Switch' */
  real_T Switch1_g;                    /* '<S15>/Switch1' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T Abs1;                         /* '<S18>/Abs1' */
  real_T MinMax;                       /* '<S18>/MinMax' */
  real_T Switch2_f;                    /* '<S18>/Switch2' */
  real_T Switch3;                      /* '<S18>/Switch3' */
  real_T Memory1_b;                    /* '<S5>/Memory1' */
  real_T Gain5;                        /* '<S5>/Gain5' */
  real_T Memory2;                      /* '<S5>/Memory2' */
  real_T Add5;                         /* '<S5>/Add5' */
  real_T Gain4;                        /* '<S5>/Gain4' */
  real_T Switch3_a;                    /* '<S5>/Switch3' */
  real_T Switch4;                      /* '<S5>/Switch4' */
  real_T Switch5;                      /* '<S5>/Switch5' */
  real_T Switch6;                      /* '<S5>/Switch6' */
  real_T Switch6_g;                    /* '<S8>/Switch6' */
  real_T Switch7_b;                    /* '<S9>/Switch7' */
  real_T DataStoreRead3;               /* '<S12>/Data Store Read3' */
  real_T regP3;                        /* '<S12>/reg P3' */
  real_T Memory3_m;                    /* '<S12>/Memory3' */
  real_T Switch7_j;                    /* '<S12>/Switch7' */
  real_T Switch4_i;                    /* '<Root>/Switch4' */
  real_T RateLimiter1;                 /* '<Root>/Rate Limiter1' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T DataStoreRead3_h;             /* '<S13>/Data Store Read3' */
  real_T regP3_g;                      /* '<S13>/reg P3' */
  real_T Memory3_mw;                   /* '<S13>/Memory3' */
  real_T Switch7_f;                    /* '<S13>/Switch7' */
  real_T Switch5_b;                    /* '<Root>/Switch5' */
  real_T RateLimiter2;                 /* '<Root>/Rate Limiter2' */
  real_T Gain4_b;                      /* '<Root>/Gain4' */
  real_T SFunction2;                   /* '<S3>/S-Function2' */
  real_T SFunction2_c;                 /* '<S7>/S-Function2' */
  real_T Divide;                       /* '<S18>/Divide' */
  real_T Saturation3;                  /* '<S18>/Saturation3' */
  real_T Divide1;                      /* '<S18>/Divide1' */
  real_T Saturation4;                  /* '<S18>/Saturation4' */
  real_T DataStoreRead5_b;             /* '<S9>/Data Store Read5' */
  real_T DataStoreRead4;               /* '<S8>/Data Store Read4' */
  real_T Gain1_b;                      /* '<S5>/Gain1' */
  real_T DataStoreRead8;               /* '<S5>/Data Store Read8' */
  real_T TrigonometricFunction8;       /* '<S5>/Trigonometric Function8' */
  real_T Product3;                     /* '<S5>/Product3' */
  real_T TrigonometricFunction7;       /* '<S5>/Trigonometric Function7' */
  real_T Product2_a;                   /* '<S5>/Product2' */
  real_T x;                            /* '<S5>/x' */
  real_T DataStoreRead9;               /* '<S5>/Data Store Read9' */
  real_T TrigonometricFunction6;       /* '<S5>/Trigonometric Function6' */
  real_T Product6;                     /* '<S5>/Product6' */
  real_T TrigonometricFunction5;       /* '<S5>/Trigonometric Function5' */
  real_T Product5;                     /* '<S5>/Product5' */
  real_T y;                            /* '<S5>/y' */
  real_T DataStoreRead5_n;             /* '<S5>/Data Store Read5' */
  real_T DataStoreRead6_l;             /* '<S5>/Data Store Read6' */
  real_T Switch9_a;                    /* '<S31>/Switch9' */
  real_T Switch9_m;                    /* '<S30>/Switch9' */
  real_T Switch9_i;                    /* '<S17>/Switch9' */
  real_T Gain2_o;                      /* '<S5>/Gain2' */
  real_T DataStoreRead3_o;             /* '<Root>/Data Store Read3' */
  real_T regP1;                        /* '<Root>/reg P1' */
  real_T v1;                           /* '<Root>/Saturation1' */
  real_T Product;                      /* '<S12>/Product' */
  real_T DataStoreRead3_h3;            /* '<S10>/Data Store Read3' */
  real_T Product_c;                    /* '<S10>/Product' */
  real_T regP2;                        /* '<Root>/reg P2' */
  real_T v1_g;                         /* '<Root>/Saturation2' */
  real_T Product_i;                    /* '<S13>/Product' */
  real_T DataStoreRead3_b;             /* '<S11>/Data Store Read3' */
  real_T Product_l;                    /* '<S11>/Product' */
  real_T Switch9_is;                   /* '<S16>/Switch9' */
  real_T TrigonometricFunction3;       /* '<S5>/Trigonometric Function3' */
  real_T Product_a;                    /* '<S5>/Product' */
  real_T Add3;                         /* '<S5>/Add3' */
  real_T TrigonometricFunction2;       /* '<S5>/Trigonometric Function2' */
  real_T Product1;                     /* '<S5>/Product1' */
  real_T TrigonometricFunction4;       /* '<S5>/Trigonometric Function4' */
  real_T TrigonometricFunction1;       /* '<S5>/Trigonometric Function1' */
  real_T Add4;                         /* '<S5>/Add4' */
  real_T Gain3_a;                      /* '<S5>/Gain3' */
  real_T DataStoreRead2;               /* '<Root>/Data Store Read2' */
  boolean_T DataStoreRead2_i;          /* '<S31>/Data Store Read2' */
  boolean_T DataStoreRead2_j;          /* '<S30>/Data Store Read2' */
  boolean_T Compare;                   /* '<S19>/Compare' */
  boolean_T Compare_m;                 /* '<S20>/Compare' */
  boolean_T and_ogr;                   /* '<S5>/and_ogr' */
  boolean_T DataStoreRead4_c;          /* '<S5>/Data Store Read4' */
  boolean_T DataStoreRead2_a;          /* '<S5>/Data Store Read2' */
  boolean_T LogicalOperator3;          /* '<S5>/Logical Operator3' */
  boolean_T DataStoreRead3_c;          /* '<S5>/Data Store Read3' */
  boolean_T LogicalOperator4;          /* '<S5>/Logical Operator4' */
  boolean_T LogicalOperator2;          /* '<S5>/Logical Operator2' */
  boolean_T DataStoreRead2_j3;         /* '<S16>/Data Store Read2' */
  boolean_T DataStoreRead2_f;          /* '<S17>/Data Store Read2' */
  boolean_T Compare_f;                 /* '<S47>/Compare' */
  boolean_T Compare_ml;                /* '<S48>/Compare' */
  boolean_T DataStoreRead7;            /* '<S21>/Data Store Read7' */
  boolean_T DataStoreRead5_o;          /* '<S21>/Data Store Read5' */
  boolean_T LogicalOperator6;          /* '<S21>/Logical Operator6' */
  boolean_T DataStoreRead6_o;          /* '<S21>/Data Store Read6' */
  boolean_T LogicalOperator7;          /* '<S21>/Logical Operator7' */
  boolean_T LogicalOperator5;          /* '<S21>/Logical Operator5' */
  boolean_T DataStoreRead7_f;          /* '<S22>/Data Store Read7' */
  boolean_T DataStoreRead5_j;          /* '<S22>/Data Store Read5' */
  boolean_T LogicalOperator6_l;        /* '<S22>/Logical Operator6' */
  boolean_T DataStoreRead6_p;          /* '<S22>/Data Store Read6' */
  boolean_T LogicalOperator7_h;        /* '<S22>/Logical Operator7' */
  boolean_T LogicalOperator5_k;        /* '<S22>/Logical Operator5' */
  boolean_T DataStoreRead2_i4;         /* '<S8>/Data Store Read2' */
  boolean_T SFunction;                 /* '<S35>/S-Function' */
  boolean_T LogicalOperator1;          /* '<S8>/Logical Operator1' */
  boolean_T Memory;                    /* '<S38>/Memory' */
  boolean_T Logic[2];                  /* '<S38>/Logic' */
  boolean_T Compare_e;                 /* '<S39>/Compare' */
  boolean_T Uk1;                       /* '<S37>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S37>/FixPt Relational Operator' */
  boolean_T DataStoreRead3_p;          /* '<S9>/Data Store Read3' */
  boolean_T SFunction_p;               /* '<S40>/S-Function' */
  boolean_T LogicalOperator3_d;        /* '<S9>/Logical Operator3' */
  boolean_T Memory_e;                  /* '<S42>/Memory' */
  boolean_T Logic_g[2];                /* '<S42>/Logic' */
  boolean_T Compare_g;                 /* '<S43>/Compare' */
  boolean_T Compare_d;                 /* '<S44>/Compare' */
  boolean_T LogicalOperator1_f;        /* '<S12>/Logical Operator1' */
  boolean_T Compare_n;                 /* '<S45>/Compare' */
  boolean_T Compare_p;                 /* '<S46>/Compare' */
  boolean_T LogicalOperator1_e;        /* '<S13>/Logical Operator1' */
  boolean_T DataStoreRead3_m;          /* '<S31>/Data Store Read3' */
  boolean_T DataStoreRead3_j;          /* '<S30>/Data Store Read3' */
  boolean_T DataStoreRead1_g;          /* '<S17>/Data Store Read1' */
  boolean_T DataStoreRead3_pw;         /* '<S17>/Data Store Read3' */
  boolean_T LogicalOperator1_en;       /* '<S17>/Logical Operator1' */
  boolean_T DataStoreRead1_p;          /* '<S16>/Data Store Read1' */
  boolean_T DataStoreRead3_mz;         /* '<S16>/Data Store Read3' */
  boolean_T LogicalOperator1_n;        /* '<S16>/Logical Operator1' */
} B_SCARA_215_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Memory1_PreviousInput;        /* '<S14>/Memory1' */
  real_T Memory3_PreviousInput;        /* '<S31>/Memory3' */
  real_T Memory3_PreviousInput_a;      /* '<S30>/Memory3' */
  real_T Memory4_PreviousInput;        /* '<S5>/Memory4' */
  real_T poprzednia_x_PreviousInput;   /* '<S5>/poprzednia_x' */
  real_T Memory3_PreviousInput_h;      /* '<S16>/Memory3' */
  real_T Memory1_PreviousInput_j;      /* '<S15>/Memory1' */
  real_T Memory3_PreviousInput_l;      /* '<S17>/Memory3' */
  real_T Memory1_PreviousInput_n;      /* '<S5>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S5>/Memory2' */
  real_T Memory3_PreviousInput_f;      /* '<S12>/Memory3' */
  real_T PrevY;                        /* '<Root>/Rate Limiter1' */
  real_T Memory3_PreviousInput_b;      /* '<S13>/Memory3' */
  real_T PrevY_j;                      /* '<Root>/Rate Limiter2' */
  real_T WZ1;                          /* '<Root>/Data Store Memory' */
  real_T WZ2;                          /* '<Root>/Data Store Memory1' */
  real_T konfiguracja;                 /* '<Root>/Data Store Memory13' */
  real_T WZx;                          /* '<Root>/Data Store Memory14' */
  real_T WZy;                          /* '<Root>/Data Store Memory15' */
  real_T V_zadana_wartosc;             /* '<Root>/Data Store Memory5' */
  real_T wspolczynnik_1;               /* '<Root>/Data Store Memory8' */
  real_T wspolczynnik_2;               /* '<Root>/Data Store Memory9' */
  boolean_T DelayInput1_DSTATE;        /* '<S37>/Delay Input1' */
  boolean_T Memory_PreviousInput;      /* '<S38>/Memory' */
  boolean_T Memory_PreviousInput_d;    /* '<S42>/Memory' */
  boolean_T trwa_bazowanie2;           /* '<Root>/Data Store Memory11' */
  boolean_T trwa_bazowanie1;           /* '<Root>/Data Store Memory12' */
  boolean_T OZK_ON;                    /* '<Root>/Data Store Memory16' */
  boolean_T bazowanie1;                /* '<Root>/Data Store Memory2' */
  boolean_T bazowanie2;                /* '<Root>/Data Store Memory3' */
  boolean_T wyzwolenie;                /* '<Root>/Data Store Memory6' */
  boolean_T wyzwalanie_ON;             /* '<Root>/Data Store Memory7' */
} DW_SCARA_215_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState DS1104ENC_SET_POS_C2_Trig_ZCE;/* '<S9>/DS1104ENC_SET_POS_C2' */
  ZCSigState DS1104ENC_SET_POS_C1_Trig_ZCE;/* '<S8>/DS1104ENC_SET_POS_C1' */
} PrevZCX_SCARA_215_T;

/* Backward compatible GRT Identifiers */
#define rtB                            SCARA_215_B
#define BlockIO                        B_SCARA_215_T
#define rtP                            SCARA_215_P
#define Parameters                     P_SCARA_215_T
#define rtDWork                        SCARA_215_DW
#define D_Work                         DW_SCARA_215_T
#define rtPrevZCSigState               SCARA_215_PrevZCX
#define PrevZCSigStates                PrevZCX_SCARA_215_T

/* Parameters (auto storage) */
struct P_SCARA_215_T_ {
  real_T Gain3_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S5>/Gain3'
                                        */
  real_T regP2_Gain;                   /* Expression: 0.2
                                        * Referenced by: '<Root>/reg P2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 3
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -3
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Constant1_Value;              /* Expression: -0.3
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T regP1_Gain;                   /* Expression: 0.2
                                        * Referenced by: '<Root>/reg P1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 3
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -3
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Constant_Value;               /* Expression: -0.3
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S5>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S8>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S9>/Constant3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S18>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: 0.05
                                        * Referenced by: '<S18>/Saturation4'
                                        */
  real_T Constant1_Value_p;            /* Expression: 1
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S18>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0.05
                                        * Referenced by: '<S18>/Saturation3'
                                        */
  real_T Constant_Value_a;             /* Expression: 1
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<S14>/Memory1'
                                        */
  real_T Memory3_X0;                   /* Expression: 0
                                        * Referenced by: '<S31>/Memory3'
                                        */
  real_T Memory3_X0_a;                 /* Expression: 0
                                        * Referenced by: '<S30>/Memory3'
                                        */
  real_T Constant_Value_d;             /* Expression: const
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Constant_Value_p;             /* Expression: const
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Memory4_X0;                   /* Expression: 0
                                        * Referenced by: '<S5>/Memory4'
                                        */
  real_T poprzednia_x_X0;              /* Expression: 120
                                        * Referenced by: '<S5>/poprzednia_x'
                                        */
  real_T jeden_Value;                  /* Expression: 1
                                        * Referenced by: '<S5>/jeden'
                                        */
  real_T L1_mm_Value;                  /* Expression: 630
                                        * Referenced by: '<S5>/L1_mm'
                                        */
  real_T L2_mm_Value;                  /* Expression: 510
                                        * Referenced by: '<S5>/L2_mm '
                                        */
  real_T dwa_Value;                    /* Expression: 2
                                        * Referenced by: '<S5>/dwa'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch2'
                                        */
  real_T Memory3_X0_g;                 /* Expression: 0
                                        * Referenced by: '<S16>/Memory3'
                                        */
  real_T Switch_Threshold;             /* Expression: 180
                                        * Referenced by: '<S14>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: -180
                                        * Referenced by: '<S14>/Switch1'
                                        */
  real_T Gain3_Gain_p;                 /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Memory1_X0_h;                 /* Expression: 0
                                        * Referenced by: '<S15>/Memory1'
                                        */
  real_T Memory3_X0_b;                 /* Expression: 0
                                        * Referenced by: '<S17>/Memory3'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 180
                                        * Referenced by: '<S15>/Switch'
                                        */
  real_T Switch1_Threshold_d;          /* Expression: -180
                                        * Referenced by: '<S15>/Switch1'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S47>/Constant'
                                        */
  real_T Constant_Value_h;             /* Expression: 0
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T Memory1_X0_b;                 /* Expression: 0
                                        * Referenced by: '<S5>/Memory1'
                                        */
  real_T Gain5_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S5>/Gain5'
                                        */
  real_T kat_Value;                    /* Expression: 180
                                        * Referenced by: '<S5>/kat '
                                        */
  real_T Memory2_X0;                   /* Expression: 0
                                        * Referenced by: '<S5>/Memory2'
                                        */
  real_T Gain4_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S5>/Gain4'
                                        */
  real_T regP3_Gain;                   /* Expression: 0.01
                                        * Referenced by: '<S12>/reg P3'
                                        */
  real_T Constant_Value_j;             /* Expression: const
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: const
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T Memory3_X0_j;                 /* Expression: 1
                                        * Referenced by: '<S12>/Memory3'
                                        */
  real_T RateLimiter1_RisingLim;       /* Computed Parameter: RateLimiter1_RisingLim
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  real_T RateLimiter1_FallingLim;      /* Computed Parameter: RateLimiter1_FallingLim
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  real_T RateLimiter1_IC;              /* Expression: 0
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  real_T Gain2_Gain_m;                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T regP3_Gain_n;                 /* Expression: 0.01
                                        * Referenced by: '<S13>/reg P3'
                                        */
  real_T Constant_Value_fi;            /* Expression: const
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant_Value_hr;            /* Expression: const
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T Memory3_X0_e;                 /* Expression: 1
                                        * Referenced by: '<S13>/Memory3'
                                        */
  real_T RateLimiter2_RisingLim;       /* Computed Parameter: RateLimiter2_RisingLim
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  real_T RateLimiter2_FallingLim;      /* Computed Parameter: RateLimiter2_FallingLim
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  real_T RateLimiter2_IC;              /* Expression: 0
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  real_T Gain4_Gain_o;                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  real_T DataStoreMemory1_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  real_T DataStoreMemory13_InitialValue;/* Expression: 0
                                         * Referenced by: '<Root>/Data Store Memory13'
                                         */
  real_T DataStoreMemory14_InitialValue;/* Expression: 0
                                         * Referenced by: '<Root>/Data Store Memory14'
                                         */
  real_T DataStoreMemory15_InitialValue;/* Expression: 0
                                         * Referenced by: '<Root>/Data Store Memory15'
                                         */
  real_T DataStoreMemory5_InitialValue;/* Expression: 100
                                        * Referenced by: '<Root>/Data Store Memory5'
                                        */
  real_T DataStoreMemory8_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory8'
                                        */
  real_T DataStoreMemory9_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory9'
                                        */
  boolean_T Memory_X0;                 /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S38>/Memory'
                                        */
  boolean_T Logic_table[16];           /* Computed Parameter: Logic_table
                                        * Referenced by: '<S38>/Logic'
                                        */
  boolean_T Constant_Value_m;          /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S39>/Constant'
                                        */
  boolean_T DelayInput1_InitialCondition;/* Computed Parameter: DelayInput1_InitialCondition
                                          * Referenced by: '<S37>/Delay Input1'
                                          */
  boolean_T Memory_X0_m;               /* Computed Parameter: Memory_X0_m
                                        * Referenced by: '<S42>/Memory'
                                        */
  boolean_T Logic_table_o[16];         /* Computed Parameter: Logic_table_o
                                        * Referenced by: '<S42>/Logic'
                                        */
  boolean_T DataStoreMemory11_InitialValue;/* Expression: false
                                            * Referenced by: '<Root>/Data Store Memory11'
                                            */
  boolean_T DataStoreMemory12_InitialValue;/* Expression: false
                                            * Referenced by: '<Root>/Data Store Memory12'
                                            */
  boolean_T DataStoreMemory16_InitialValue;/* Expression: false
                                            * Referenced by: '<Root>/Data Store Memory16'
                                            */
  boolean_T DataStoreMemory2_InitialValue;/* Expression: false
                                           * Referenced by: '<Root>/Data Store Memory2'
                                           */
  boolean_T DataStoreMemory3_InitialValue;/* Expression: false
                                           * Referenced by: '<Root>/Data Store Memory3'
                                           */
  boolean_T DataStoreMemory6_InitialValue;/* Expression: false
                                           * Referenced by: '<Root>/Data Store Memory6'
                                           */
  boolean_T DataStoreMemory7_InitialValue;/* Expression: false
                                           * Referenced by: '<Root>/Data Store Memory7'
                                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_SCARA_215_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_SCARA_215_T SCARA_215_P;

/* Block signals (auto storage) */
extern B_SCARA_215_T SCARA_215_B;

/* Block states (auto storage) */
extern DW_SCARA_215_T SCARA_215_DW;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCX_SCARA_215_T SCARA_215_PrevZCX;

/*====================*
 * External functions *
 *====================*/
extern SCARA_215_rtModel *SCARA_215(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_SCARA_215_T *const SCARA_215_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SCARA_215'
 * '<S1>'   : 'SCARA_215/DS1104DAC_C1'
 * '<S2>'   : 'SCARA_215/DS1104DAC_C2'
 * '<S3>'   : 'SCARA_215/DS1104ENC_POS_C2'
 * '<S4>'   : 'SCARA_215/DS1104ENC_SETUP'
 * '<S5>'   : 'SCARA_215/OZK'
 * '<S6>'   : 'SCARA_215/RTI Data'
 * '<S7>'   : 'SCARA_215/_DS1104ENC_POS_C1'
 * '<S8>'   : 'SCARA_215/bazowanie_1'
 * '<S9>'   : 'SCARA_215/bazowanie_2 '
 * '<S10>'  : 'SCARA_215/koordynacja_predkosci_1'
 * '<S11>'  : 'SCARA_215/koordynacja_predkosci_2'
 * '<S12>'  : 'SCARA_215/predkosc_zadana_1'
 * '<S13>'  : 'SCARA_215/predkosc_zadana_2'
 * '<S14>'  : 'SCARA_215/sprawdzenie_poprawnosci_WZ1'
 * '<S15>'  : 'SCARA_215/sprawdzenie_poprawnosci_WZ2'
 * '<S16>'  : 'SCARA_215/tryb_wyzwalania_1'
 * '<S17>'  : 'SCARA_215/tryb_wyzwalania_2'
 * '<S18>'  : 'SCARA_215/wspolczynniki'
 * '<S19>'  : 'SCARA_215/OZK/Compare To Constant'
 * '<S20>'  : 'SCARA_215/OZK/Compare To Constant1'
 * '<S21>'  : 'SCARA_215/OZK/OZK_ON'
 * '<S22>'  : 'SCARA_215/OZK/OZK_ON1'
 * '<S23>'  : 'SCARA_215/OZK/kw_1'
 * '<S24>'  : 'SCARA_215/OZK/kw_2'
 * '<S25>'  : 'SCARA_215/OZK/kw_3'
 * '<S26>'  : 'SCARA_215/OZK/kw_4'
 * '<S27>'  : 'SCARA_215/OZK/kw_5'
 * '<S28>'  : 'SCARA_215/OZK/kw_6'
 * '<S29>'  : 'SCARA_215/OZK/kw_7'
 * '<S30>'  : 'SCARA_215/OZK/tryb_wyzwalania_1'
 * '<S31>'  : 'SCARA_215/OZK/tryb_wyzwalania_2'
 * '<S32>'  : 'SCARA_215/RTI Data/RTI Data Store'
 * '<S33>'  : 'SCARA_215/RTI Data/RTI Data Store/RTI Data Store'
 * '<S34>'  : 'SCARA_215/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S35>'  : 'SCARA_215/bazowanie_1/DS1104BIT_IN_C0'
 * '<S36>'  : 'SCARA_215/bazowanie_1/DS1104ENC_SET_POS_C1'
 * '<S37>'  : 'SCARA_215/bazowanie_1/Detect Fall Nonpositive'
 * '<S38>'  : 'SCARA_215/bazowanie_1/S-R Flip-Flop'
 * '<S39>'  : 'SCARA_215/bazowanie_1/Detect Fall Nonpositive/Nonpositive'
 * '<S40>'  : 'SCARA_215/bazowanie_2 /DS1104BIT_IN_C1'
 * '<S41>'  : 'SCARA_215/bazowanie_2 /DS1104ENC_SET_POS_C2'
 * '<S42>'  : 'SCARA_215/bazowanie_2 /S-R Flip-Flop1'
 * '<S43>'  : 'SCARA_215/predkosc_zadana_1/Compare To Constant'
 * '<S44>'  : 'SCARA_215/predkosc_zadana_1/Compare To Constant1'
 * '<S45>'  : 'SCARA_215/predkosc_zadana_2/Compare To Constant'
 * '<S46>'  : 'SCARA_215/predkosc_zadana_2/Compare To Constant1'
 * '<S47>'  : 'SCARA_215/wspolczynniki/Compare To Zero'
 * '<S48>'  : 'SCARA_215/wspolczynniki/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_SCARA_215_h_ */
