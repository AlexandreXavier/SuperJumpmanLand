#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Image
#define INCLUDED_com_ktxsoftware_kje_backend_cpp_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Kt/stdafx.h>
#include <Kt/Resources/Image.h>

#include <com/ktxsoftware/kje/Image.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Image)
HX_DECLARE_CLASS5(com,ktxsoftware,kje,backend,cpp,Image)
namespace com{
namespace ktxsoftware{
namespace kje{
namespace backend{
namespace cpp{


class Image_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(::String filename);

	public:
		static hx::ObjectPtr< Image_obj > __new(::String filename);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Image_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::com::ktxsoftware::kje::Image_obj *()
			{ return new ::com::ktxsoftware::kje::Image_delegate_< Image_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Image"); }

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual bool isAlpha( int x,int y);
		Dynamic isAlpha_dyn();
public:
	Kt::Image image;
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
} // end namespace backend
} // end namespace cpp

#endif /* INCLUDED_com_ktxsoftware_kje_backend_cpp_Image */ 
