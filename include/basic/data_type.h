/**
 * @file data_type.h
 * @brief The data type head file to define some aliases.
 *
 * @author Yufei.Liu, Calm.Liu@outlook.com | Chenyu.Bao, bcynuaa@163.com
 * @date 2022-11-02
 *
 * @version 0.1.0
 * @copyright Copyright (c) 2022 - 2023 by SubrosaDG developers. All rights reserved.
 * SubrosaDG is free software and is distributed under the MIT license.
 */

#ifndef SUBROSA_DG_DATA_TYPE_H_
#define SUBROSA_DG_DATA_TYPE_H_

#include <cstddef>

namespace SubrosaDG {

using Index = std::size_t;

#ifdef SUBROSA_DG_SINGLE_PRECISION
using Real = float;
#else
using Real = double;
#endif

}  // namespace SubrosaDG

#endif  // SUBROSA_DG_DATA_TYPE_H_
