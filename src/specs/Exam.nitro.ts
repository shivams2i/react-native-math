import type { HybridObject } from 'react-native-nitro-modules'

export interface Exam extends HybridObject<{ ios: 'c++'; android: 'c++' }> {
  add(a: number, b: number): number
}
