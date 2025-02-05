#ifndef slic3r_Text_Shape_hpp_
#define slic3r_Text_Shape_hpp_

namespace Slic3r {
class TriangleMesh;

extern std::vector<std::string> init_occt_fonts();
extern void load_text_shape(const char* text, const char* font, const float text_height, const float thickness, bool is_bold, bool is_italic, TriangleMesh& text_mesh);

}; // namespace Slic3r

#endif // slic3r_Text_Shape_hpp_