/* Autogenerated by png2wx.pl on Thu Nov  4 13:06:52 2010 */
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#	include <wx/wx.h>
#endif
#include <wx/mstream.h>
#include "icons.h"

wxBitmap *_img_babel_pi;
wxBitmap *_img_babel;

#ifdef OBABEL_USE_SVG
#include "ocpn_plugin.h"
wxString _svg_obabel;
wxString _svg_obable_toggled;
#endif


void initialize_images(void)
{
	{
		wxMemoryInputStream sm("\211PNG\r\n\032\n\000\000\000\rIHDR\000\000\000 \000\000\000 \b\006\000\000\000szz\364\000\000\000\321IDATX\303\355V\273\022\303 \014\22392\261\260d\350\367\364\377\327\214\031\2636_\020u\311\220\245W \342q\327\372\216\021$\313\262\r\360\353a\205\367\250z\313\211\300\233)@\265\242N\\R\366&P\325\003\254A\300\367\356(/\006e.!/\000fs\3312\200M\255\000{\230\220\243\264a\027\002E\331\207\020d&\344Ms\363\033\206\262\004v9\230\246\211)I\230p\363\261\004\347\256\002\014!0\201,s\231\261\302\004\264l\005b\214\230\347\371y\255\355\011\\b\316%g\020\031\000\354\373\016\000t\316\3418\216\246\363a\271d\252<k\n\370Z\011<\251t[ep\252\333\320\nV\372\366\311\204/\000q\344O\251*\036g\262c\254\343\177\274\001\326\316l\000X'\275H\000\000\000\000IEND\256B`\202", 266);
		_img_babel = new wxBitmap(wxImage(sm));
	}
	{
		wxMemoryInputStream sm("\211PNG\r\n\032\n\000\000\000\rIHDR\000\000\000 \000\000\000 \b\006\000\000\000szz\364\000\000\002\223IDATX\303\275\327Mh\\U\024\a\360\337{\231\031\035c\232\264\240v\323@\024\212P\244\033\r\255X\254R\011-!\213\b\n\226\"\305\246\273i\021I7A\244P\261\305E\245\017\334e\241\230\nB\301ES\332\252\350F\nJ\005\021\245\324v\347\a\244\213B\265L\342\3148.z+\3030\311\314\235d\362\207\3130\347\235s\317\377\335\363q\317K \313\262>\014a\004\343xL\357\360;>\307\037\270\235\004\347{\360!\312a\335\355!\201\001<\200\"^\313a#>\302\\\251Tz\313:!\313\262Y\\H\261\013\277\256\247s(\225Jo`!\305\273\3706\3026\305\213\2507\255\275]\360\370:\3050nD\030\355\306W-\344[\361P$\201ki\027\254\317/#\377\000\207Q\020y\234\261\250\257\360\3544\036\356%\201\351\3307l\207\\\244\376\341\025l\336\307\217\370\273\327!h\304<^\b\211y2T\307e\314\365\352\004\356\343:\366\341/\274\212#A>\034Bt\263W\004\236\302\246\220\210;\361I\330#\337\244\3678.al\255\bl\011\227\025|\207\a\333\350'\241\337\257\331\011\274\207\375\275h\311\235$\3413x\"\252\264r\2715%\3602vD\370\257\346\363\371\343\370\006\223k\021\202z\207\216\317\340'\324\252\325\352|__\337l\255V\333\037\362\341\\\267\004&\360\3122\317\256\342\355&\335I\250T*\257'I\362|\220\217\256\206\300p(\251V\270\205b>\237\177\247^\257\253V\253#a\332\271wl\365\377\017\356`\350\220gc\011\214\343\324\375\270\206\245!!\237\303\307\225J\245\277\315K<\202\315!\337\376\215!\360\017\376,\026\213I\241P8\267\270\270\370\351\322\322\322\235\260\331\325\310j;\026\362\343\213\030\002\337\343@\271\\.\224\313\345\231$I\246WQ\356y<\211+\315\227\325r\0046\206\376\376&\006\233b\332\r6\341D\030\375~hG\240?\334\373\245\330\341\242\r6\264\2703Z6\242\001Lu\350\374\n\216\206\337N\347\211\r\355\b\234iVZ\001\277\004\375\237;\324\237h\036\\[\021\030\213\030\273b\023c\b\2375\023X\300\243]\3065\351b\004\334\336\360\177s\032\232\315K\r\302\301\260q'\353P\260\231\212\260\031l\014I\032\346\272mY\226\035\\\317O\263,\313J\030I\262,K\361,.\342K\314\340\267\036\372\036\011\337\017\243x\372?\225w\223\264\1777@\217\000\000\000\000IEND\256B`\202", 716);
		_img_babel_pi = new wxBitmap(wxImage(sm));
	}

#ifdef OBABEL_USE_SVG
	wxFileName fn;
	fn.SetPath(*GetpSharedDataLocation());
	fn.AppendDir(_T("plugins"));
	fn.AppendDir(_T("obabel_pi"));
	fn.AppendDir(_T("data"));
	fn.SetFullName(_T("obabel.svg"));
	_svg_obabel = fn.GetFullPath();
	fn.SetFullName(_T("obababel_toggled.svg"));
	_svg_obabel_toggled = fn.GetFullPath();

	/*
	wxFileName fn;
	wxString tmp_path;

	tmp_path = GetPluginDataDir("ShipDriver_pi");
	fn.SetPath(tmp_path);
	fn.AppendDir(_T("data"));

	fn.SetFullName(_T("shipdriver_pi.svg"));
	_svg_shipdriver = fn.GetFullPath();
	fn.SetFullName(_T("shipdriver_pi_toggled.svg"));
	_svg_shipdriver_toggled = fn.GetFullPath();
*/
#endif // OBABEL_USE_SVG



	return;
}
