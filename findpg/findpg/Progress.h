//
// This module declears a class responsible for displaying progress.
//
#pragma once

// C/C++ standard headers
#include <cstdint>

// Other external headers
// Windows headers
#include <engextcpp.hpp>

// Original headers


////////////////////////////////////////////////////////////////////////////////
//
// macro utilities
//


////////////////////////////////////////////////////////////////////////////////
//
// constants and macros
//


////////////////////////////////////////////////////////////////////////////////
//
// types
//

class Progress
{
public:
    Progress(
        __in ExtExtension* Ext);

    ~Progress();

    Progress& operator++();

private:
    ExtExtension* m_Ext;
    std::uint64_t m_Progress;
};


////////////////////////////////////////////////////////////////////////////////
//
// prototypes
//


////////////////////////////////////////////////////////////////////////////////
//
// variables
//


////////////////////////////////////////////////////////////////////////////////
//
// implementations
//

