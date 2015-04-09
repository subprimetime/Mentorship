/////////////////////////////////////////////////////////////////////////////


How to create a windows environment variable for gtest.

In Windows - Control Panel\All Control Panel Items\System
- Environmental Variables
- Add a new system variable  
Variable name = gtest_ment   
Variable = whatever your directory for gtest is (mine was C:\gtest-1.7.0\, yours might be something like C:\gtest\gtest-1.7.0\). Make sure this variable is the root of all the gtest sub folders (build-aux, cmake, codegear, etc etc).
Save 

In VS2013
Right click on your project properties(classAssignments)
- c\c++ - Additional Include Directories  - change whatever you currently have for gtest and replace with $(gtest_ment)\include
- Linker - General - Additional Library Directories – update to $(gtest_ment)\msvc\gtest\Debug

Note – you may need to restart VS2013.



/////////////////////////////////////////////////////////////////////////////

========================================================================
    CONSOLE APPLICATION : classAssignments Project Overview
========================================================================


AppWizard has created this classAssignments application for you.

This file contains a summary of what you will find in each of the files that
make up your classAssignments application.


classAssignments.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

classAssignments.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

classAssignments.cpp
    This is the main application source file.

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named classAssignments.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
