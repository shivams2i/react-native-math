import type { HybridObject } from 'react-native-nitro-modules'

export interface ExamOnLoad extends HybridObject<{ android: 'kotlin' }> {
  init(): void
}
