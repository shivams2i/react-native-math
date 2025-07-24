#pragma once

#include "HybridExamSpec.hpp"

namespace margelo::nitro::math
{

    class HybridExam : public HybridExamSpec
    {
    public:
        HybridExam() : HybridObject(TAG) {}

    public:
        double add(double a, double b) override;
    };

}