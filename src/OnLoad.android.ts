import { NitroModules } from 'react-native-nitro-modules'
import type { ExamOnLoad as ExamOnLoadSpec } from './specs/ExamOnLoad.nitro'

const ExamOnLoad = NitroModules.createHybridObject<ExamOnLoadSpec>('ExamOnLoad')
export const init = () => ExamOnLoad.init()
