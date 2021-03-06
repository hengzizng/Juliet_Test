/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE23_Relative_Path_Traversal__wchar_t_file_w32CreateFile_81.h
Label Definition File: CWE23_Relative_Path_Traversal.label.xml
Template File: sources-sink-81.tmpl.h
*/
/*
 * @description
 * CWE: 23 Relative Path Traversal
 * BadSource: file Read input from a file
 * GoodSource: Use a fixed file name
 * Sinks: w32CreateFile
 *    BadSink : Open the file named in data using CreateFile()
 * Flow Variant: 81 Data flow: data passed in a parameter to a virtual method called via a reference
 *
 * */

#include "std_testcase.h"

#ifdef _WIN32
#define BASEPATH L"c:\\temp\\"
#else
#include <wchar.h>
#define BASEPATH L"/tmp/"
#endif

namespace CWE23_Relative_Path_Traversal__wchar_t_file_w32CreateFile_81
{

class CWE23_Relative_Path_Traversal__wchar_t_file_w32CreateFile_81_base
{
public:
    /* pure virtual function */
    virtual void action(wchar_t * data) const = 0;
};

#ifndef OMITBAD

class CWE23_Relative_Path_Traversal__wchar_t_file_w32CreateFile_81_bad : public CWE23_Relative_Path_Traversal__wchar_t_file_w32CreateFile_81_base
{
public:
    void action(wchar_t * data) const;
};

#endif /* OMITBAD */

#ifndef OMITGOOD

class CWE23_Relative_Path_Traversal__wchar_t_file_w32CreateFile_81_goodG2B : public CWE23_Relative_Path_Traversal__wchar_t_file_w32CreateFile_81_base
{
public:
    void action(wchar_t * data) const;
};

#endif /* OMITGOOD */

}
