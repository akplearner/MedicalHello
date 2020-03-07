cmake_minimum_required(VERSION 3.16) 
PROJECT( myProject )
FIND_PACKAGE ( ITK ) 
IF ( ITK_FOUND ) 
    INCLUDE( ${ITK_USE_FILE} )
ELSE( ITK_FOUND )
    MESSAGE(FATAL_ERROR "Cannot build without ITK. Please set ITK_DIR.")
ENDIF( ITK_FOUND )
ADD_EXECUTABLE( HelloWorld HellowWorld.cxx ) 
TARGET_LINK_LIBRARIES ( HelloWorld ITKCommon) 

#${ITK_LIBRARIES} or ITKCommon
#ADD_EXECUTABLE( foo foo.cxx ) 
#TARGET_LINK_LIBRARIES ( foo ITKCommon)