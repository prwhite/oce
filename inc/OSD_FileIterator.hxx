// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_FileIterator_HeaderFile
#define _OSD_FileIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _OSD_File_HeaderFile
#include <OSD_File.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _OSD_Error_HeaderFile
#include <OSD_Error.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class OSD_OSDError;
class OSD_Path;
class TCollection_AsciiString;
class OSD_File;


//! Manages a breadth-only search for files in the specified <br>
//!          Path. <br>
//!          There is no specific order of results. <br>
class OSD_FileIterator  {
public:

  DEFINE_STANDARD_ALLOC

  //! Instantiates Object as empty Iterator; <br>
  Standard_EXPORT   OSD_FileIterator();
  //! Instantiates Object as Iterator; <br>
//!          Wild-card "*" can be used in Mask the same way it <br>
//!          is used by unix shell for file names <br>
  Standard_EXPORT   OSD_FileIterator(const OSD_Path& where,const TCollection_AsciiString& Mask);
  
  Standard_EXPORT     void Destroy() ;
~OSD_FileIterator()
{
  Destroy();
}
  //! Initializes the current File Iterator <br>
  Standard_EXPORT     void Initialize(const OSD_Path& where,const TCollection_AsciiString& Mask) ;
  //! Returns TRUE if there are other items using the 'Tree' <br>
//!          method. <br>
  Standard_EXPORT     Standard_Boolean More() ;
  //! Sets the iterator to the next item. <br>
//!          Returns the item value corresponding to the current <br>
//!          position of the iterator. <br>
  Standard_EXPORT     void Next() ;
  //! Returns the next file found . <br>
  Standard_EXPORT     OSD_File Values() ;
  //! Returns TRUE if an error occurs <br>
  Standard_EXPORT     Standard_Boolean Failed() const;
  //! Resets error counter to zero <br>
  Standard_EXPORT     void Reset() ;
  //! Raises OSD_Error <br>
  Standard_EXPORT     void Perror() ;
  //! Returns error number if 'Failed' is TRUE. <br>
  Standard_EXPORT     Standard_Integer Error() const;





protected:





private:



OSD_File TheIterator;
Standard_Boolean myFlag;
TCollection_AsciiString myMask;
TCollection_AsciiString myPlace;
Standard_Address myDescr;
Standard_Address myEntry;
Standard_Integer myInit;
OSD_Error myError;
Standard_Address myHandle;
Standard_Address myData;
Standard_Boolean myFirstCall;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
