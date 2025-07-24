import { NitroModules } from 'react-native-nitro-modules'
import type { Exam as ExamSpecs } from './specs/Exam.nitro'
import { init } from './OnLoad'

init()

export const HybridExam = NitroModules.createHybridObject<ExamSpecs>('Exam')
