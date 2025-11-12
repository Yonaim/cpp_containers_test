#ifndef TEST_NAMESPACE_H
#define TEST_NAMESPACE_H

// ============================================================================
//  Common header to automatically switch between STD and FT implementations
// ============================================================================

#include <algorithm>
#include <functional>
#include <iterator>
#include <map>
#include <memory>
#include <stack>
#include <type_traits>
#include <utility>
#include <vector>

#ifdef STD_MODE
// -----------------------------
// Use standard library headers
// -----------------------------
namespace ft = std;
#else
    // -----------------------------
    // Use custom ft headers
    // -----------------------------
    // TODO: include your implemented header file
#endif

#endif // TEST_NAMESPACE_H
