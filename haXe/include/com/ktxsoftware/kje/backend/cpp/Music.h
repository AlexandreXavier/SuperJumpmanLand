#ifndef INCLUDED_com_ktxsoftware_kje_backend_cpp_Music
#define INCLUDED_com_ktxsoftware_kje_backend_cpp_Music

#ifndef HXCPP_H
#include <hxcpp.h>
#endif
#include <Kt/stdafx.h>
#include <Kt/Sound/Music.h>
#include <com/ktxsoftware/kje/Music.h>
HX_DECLARE_CLASS3(com,ktxsoftware,kje,Music)
HX_DECLARE_CLASS5(com,ktxsoftware,kje,backend,cpp,Music)
namespace com{
namespace ktxsoftware{
namespace kje{
namespace backend{
namespace cpp{


class Music_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Music_obj OBJ_;
		Music_obj();
		Void __construct(::String filename);

	public:
		static hx::ObjectPtr< Music_obj > __new(::String filename);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Music_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::com::ktxsoftware::kje::Music_obj *()
			{ return new ::com::ktxsoftware::kje::Music_delegate_< Music_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Music"); }

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void update( );
		Dynamic update_dyn();
		Kt::Text music;
};

} // end namespace com
} // end namespace ktxsoftware
} // end namespace kje
} // end namespace backend
} // end namespace cpp

#endif /* INCLUDED_com_ktxsoftware_kje_backend_cpp_Music */ 
