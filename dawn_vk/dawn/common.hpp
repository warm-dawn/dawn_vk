# ifndef __dawn_COMMON_HPP__
# define __dawn_COMMON_HPP__

# include <string>
# include <vector>
# include <array>
# include <set>
# include <memory>
# include <functional>
# include <list>
# include <mutex>

# if 0
# include "gflags/gflags.h"
# include "glog/logging.h"
# define detail_show    LOG(INFO)
# define dbg_show       LOG(INFO)
# define info_show      LOG(INFO)
# define wrn_show       LOG(WARNING)
# define err_show       LOG(ERROR)
# define fatal_show     LOG(FATAL)
# else
# include <iostream>
# define detail_show std::cout<<'\n'
# define dbg_show std::cout<< '\n'
# define info_show std::cout<< '\n'
# define wrn_show std::cout<< '\n'
# define err_show std::cout<< '\n'
# define fatal_show std::cout<< '\n'
# endif

# ifdef _DEBUG
# define CODE_POS wrn_show << __FUNCTION__ << "[" <<__LINE__ << "]"
# else
# define CODE_POS
# endif

# define if_show(exp__, ...) \
    if(exp__){ dbg_show << __VA_ARGS__; } else{wrn_show<<__VA_ARGS__;}

# define assert_show(exp__, ...) \
    if(!(exp__)){ err_show<<__VA_ARGS__; }

# define inL __inline

#if defined(_MSC_VER)
# define DEF_module_sole __declspec(selectany)
#elif defined(__MINGW32__)
# define DEF_sole __attribute__((selectany))
#else
# define DEF_sole __attribute__((weak))
#endif // !_MSC_VER

# define X_enum_item_comma(name__) e_##name__,
# define X_STR_comma(name__) #name__,


# define DEC_T(name__) \
struct T_##name__ { \
enum E_##name__ { \
    Xt_##name__(X_enum_item_comma) \
    count \
}; \
static char const* name__##_names[count]; \
static inL bool is_legal(int v_){return 0<=v_&&v_<count;}\
};
# define DEF_T(name__) \
char const* T_##name__::name__##_names[count] = { Xt_##name__(X_STR_comma) };


# define DH ,
# define X_enum_member_no_value(e_name__) e_##e_name__,

# define Is_can_2_a_type(type__, member__)\
    inL operator type__() { return static_cast<type__>(member__) ;}\
    inL operator const type__ ()const{ return static_cast<const type__>(member__) ;}

# define X_declare_class(name__) class name__;
# define X_friend_class(name__) friend class name__;


# if 1
/*
待办 改用虚函数
    # define Xt_example(X__) \
    X__(name1, function1) \

    using Fp = void (*)();
    XEnumEx_decl(enum_name, Xt_example, Fp);
*/
# define XEnum_decl(name__, Xt__) \
struct name__{ \
    enum E{ Xt__(X_enum_item_comma) e_max_num }; \
    static char const* mean[E::e_max_num]; \
};
# define XEnum_def(name__, Xt__) \
    char const* name__::mean[name__::e_max_num] = {Xt__(X_STR_comma)}; \

# define XEnumEx_decl(name__, Xt__, Func_type__) \
    XEnum_decl(name__##_base, Xt__) \
    struct name__:public name__##_base{ Func_type__ cb[E::e_max_num]; };



# endif


# if 0 // 待修改
# define ___X_flagbit_value( enum_name__, enum_value__, comment__ )\
    static constexpr Original_type enum_name__ = enum_value__ ;

# define ___X_flagbit_on_off( enum_name__, enum_value__, comment__ )\
    New_type& on_##enum_name__(){ flags |= enum_name__; return *this; } \
    New_type& off_##enum_name__() { flags &= ~enum_name__; return *this; }

# define ___X_flag_all_bit( enum_name__, enum_value__, comment__ ) \
    | enum_name__

# define Is_a_flag_bit( new_type__, enum_t__, table__) \
    union F_##new_type__ { \
        using Original_type = enum_t__; \
        using New_type = F_##new_type__; \
        Original_type bit; \
        unsigned int flags; \
        table__(___X_flagbit_value);\
        table__(___X_flagbit_on_off);\
        static constexpr unsigned int all_bits = 0 table__(___X_flag_all_bit) ; \
        inL New_type& clear(){flags = 0; return *this;} \
        inL New_type& all() { flags = all_bits; return *this; } \
        inL F_##new_type__():flags(0){}\
        inL F_##new_type__(unsigned int const flag_) :flags(flag_) {}\
        inL F_##new_type__(Original_type const& bit_) :flags(bit_) {}\
        inL F_##new_type__(F_##new_type__ const& flag_) :flags(flag_.flags) {}\
        inL operator Original_type&() { return bit; }\
        inL operator Original_type&()const { return const_cast<Original_type&>(bit); }\
        inL operator Original_type*() { return &bit; }\
        inL operator Original_type*()const { return const_cast<Original_type*>(&bit); }\
        inL operator unsigned int&() { return flags; } \
        inL operator unsigned int&()const { return const_cast<unsigned int&>(flags); } \
        inL operator unsigned int*()const { return const_cast<unsigned int*>(&flags); } \
        inL operator unsigned int*() { return &flags; }\
    };

# define ___X_is_a_e_member(enum_name__, enum_value__, comment__)\
    static constexpr Original_type e_##enum_name__ = enum_value__; \

# define Is_a_enum( new_type__, enum_t__, table__ )\
    struct E_##new_type__ {\
        using Original_type = enum_t__;\
        Original_type flag;\
        table__(___X_is_a_e_member);\
        inL E_##new_type__():flag(static_cast<Original_type>(0)){}\
        inL E_##new_type__(Original_type flag_) :flag(flag_) {}\
        inL operator Original_type() { return flag; }\
        inL operator Original_type()const { return flag; }\
        inL operator Original_type*()const { return const_cast<Original_type*>(&flag); }\
        inL operator Original_type*() { return &flag; }\
    };

# define ___X_def_e_member(enum_name__, enum_value__, comment__)\
    constexpr static int e_##enum_name__ = enum_value__; \

# define Def_enum( new_type__, table__ )\
    struct E_##new_type__ {\
        int flag; \
        table__(___X_def_e_member);\
        inL E_##new_type__():flag(static_cast<int>(0)){}\
        inL E_##new_type__(int flag_) :flag(flag_) {}\
        inL operator int() { return flag; }\
        inL operator int()const { return flag; }\
        inL operator int*()const { return const_cast<int*>(&flag); }\
        inL operator int*() { return &flag; }\
    };

# define X_enum_member(e_name__, e_value__, comment__) \
    e_##e_name__ = e_value__ ,


# define X_functions_e_member(ret_type__,fun_name__,comment__,...) fun_name__ ,
# define X_functions_comment(ret_type__,fun_name__,comment__,...) comment__ ,
# define X_functions_name_str(ret_type__,fun_name__,comment__,...) #fun_name__ , 
# define X_functions_declare(ret_type__,fun_name__,comment__,...) ret_type__ fun_name__(__VA_ARGS__);
# define X_functions_types(ret_type__,fun_name__,comment__,...) ret_type__(*)(__VA_ARGS__) ,
# define X_functions_function_name(ret_type__,fun_name__,comment__,...) ::fun_name__ ,

# define M_functions_enum_declare(Xtname__) \
    struct E_##Xtname__ { \
    enum E {\
        Xt_##Xtname__(X_functions_e_member) \
        e_functions_count \
    }; \
    static constexpr char const* name_str[] = { Xt_##Xtname__(X_functions_name_str) "" }; \
    static constexpr char const* comment[] = { Xt_##Xtname__(X_functions_comment) "" }; \
    static constexpr int(*function_ptrs[])() = { Xt_##Xtname__(X_functions_function_name) nullptr }; \
    }; \

# endif

namespace dawn {

    template<typename T__> using Sp = std::shared_ptr<T__>;
    template<typename T__> using Wp = std::weak_ptr<T__>;

	template<typename T__>
	class Singleton {
	public:
		static std::unique_ptr<T__> instance_uptr;

		static std::once_flag flag;

		template<typename... Args__>
		static T__& init(Args__&&... args_) {
			std::call_once(Singleton::flag, [](std::unique_ptr<T__>& uptr_, Args__&&... args2_) {
				uptr_.reset(new T__(std::forward<Args__>(args2_)...));
				}, instance_uptr, std::forward<Args__>(args_)...);
			return *instance_uptr;
		}
		static T__& get() {
			assert(!!instance_uptr && "Sigleton must init instance");
			return *instance_uptr;
		}
	};
	template<typename T__>
	std::unique_ptr<T__> Singleton<T__>::instance_uptr(nullptr);
	template<typename T__>
	std::once_flag Singleton<T__>::flag;
    template<typename T__>
    using St = Singleton<T__>;


    // 应对enum class 放入c的enum需要强转的问题
    template<typename T__> struct E {
        using Otype = std::underlying_type_t<T__>;
        using OEtype = T__;
        Otype flag;
        inL constexpr E() :flag(0) {}
        inL constexpr E(Otype const fb_) : flag(fb_) {}
        inL constexpr E(OEtype const fb_) : flag(fb_) {}
        inL constexpr operator Otype() { return flag; }
        inL constexpr operator Otype()const { return flag; }
        inL operator Otype* () { return &flag; }
        inL operator Otype const* ()const { return &flag; }
        inL constexpr operator OEtype() { return static_cast<OEtype>(flag); }
        inL constexpr operator OEtype()const { return static_cast<OEtype>(flag); }
        inL operator OEtype* () { return reinterpret_cast<OEtype*>(&flag); }
        inL operator OEtype const* ()const { return reinterpret_cast<OEtype const*>(&flag); }

        inL bool operator==(OEtype const& oe_) { return oe_ == flag; }
        inL bool operator!=(OEtype const& oe_) { return oe_ != flag; }
    };


    /*
    用于免除使用者填写参数时 手动写共享指针到原始指针
    同时也表示本函数对此参数不涉及动态内存申请与释放
    */
    template <typename Handle_type__> class AHandle {
    public:
        using Otype = Handle_type__;
    public:
        Otype handle;
    public:
        inL AHandle(std::shared_ptr<Otype> sptr_) :handle(sptr_->handle) {}
        inL AHandle(Otype& ref_) : handle(ref_.handle) {}
        inL AHandle(const Otype handle_) : handle(handle_) {}
        inL AHandle(std::nullptr_t nullptr_) : handle(nullptr) {}
        inL AHandle() : handle(nullptr) {}
    public:
        Is_can_2_a_type(Otype&, handle);
        Is_can_2_a_type(Otype*, &handle);
    };

    template<typename Basic__> class Get_handle {
        using Otype = Basic__;
    public:
        decltype(Basic__::handle) handle;
    public:
        inL Get_handle(std::shared_ptr<Otype> sptr_) :handle(sptr_->handle) {}
        inL Get_handle(Otype& ref_) : handle(ref_.handle) {}
        inL Get_handle(const Otype handle_) : handle(handle_) {}
        inL Get_handle(std::nullptr_t nullptr_) : handle(nullptr) {}
        inL Get_handle() : handle(nullptr) {}
    public:
        Is_can_2_a_type(Otype&, handle);
        Is_can_2_a_type(Otype*, &handle);
    };

    template <typename T__> class Aptr {
    public:
        T__* ptr;

        inL Aptr(std::shared_ptr<T__> sptr_) :ptr(sptr_.get()) {}
        inL Aptr(T__ const* ptr_ = nullptr) : ptr(const_cast<T__*>(ptr_)) {}
        inL constexpr Aptr(std::nullptr_t) noexcept : ptr(nullptr) {}

        inL operator T__*() { return ptr; }
        inL operator const T__*() { return const_cast<const T__*>(ptr); }

        inL T__* operator ->() { return ptr; }

        inL bool operator == (std::nullptr_t) { return ptr == nullptr; }
        inL bool operator != (std::nullptr_t) { return ptr != nullptr; }
        inL bool operator == (T__* p_) { return ptr == p_; }
        inL bool operator != (T__* p_) { return ptr != p_; }
        inL bool operator == (std::shared_ptr<T__> p_) { return ptr == p_.get(); }
        inL bool operator != (std::shared_ptr<T__> p_) { return ptr != p_.get(); }
    };
    template <typename T__> class Aref {
    public:
        T__& ref;

        inL Aref(std::shared_ptr<T__> sptr_) : ref(*sptr_) {}
        inL Aref(T__* ptr_) : ref(*ptr_) {}
        inL Aref(T__& ref_) : ref(ref_) {}

        inL operator T__*() { return &ref; }
        inL operator T__*() const { return const_cast<T__* const>(&ref); }
        inL operator T__&() { return ref; }

        inL T__* operator ->() { return &ref; }
        inL T__& operator *() { return ref; }

        inL bool operator == (T__* p_) { return &ref == p_; }
        inL bool operator != (T__* p_) { return &ref != p_; }
        inL bool operator == (std::shared_ptr<T__> p_) { return &ref == p_.get(); }
        inL bool operator != (std::shared_ptr<T__> p_) { return &ref != p_.get(); }
    };

    /*用于解决临时使用的基本类型变量在传参时取地址问题 补丁性的东西*/
    template <typename T__> class Aptr_temp {
    public:
        T__ v;
        Aptr_temp(T__ v_) :v(v_) {}
        operator Aptr<T__>() {
            return &v;
        }
    };

    /*
        https://zh.cppreference.com/w/cpp/utility/initializer_list
        (C++14 前)
        底层数组不保证在原始 initializer_list 对象的生存期结束后继续存在。
        std::initializer_list 的存储是未指定的（即它可以是自动、临时或静态只读内存，依赖场合）。
        (C++14 起)
        底层数组是 const T[N] 类型的临时数组，
        其中每个元素都从原始初始化器列表的对应元素复制初始化（除非窄化转换非法）。
        底层数组的生存期与任何其他临时对象相同，
        除了从数组初始化 initializer_list 对象会延长数组的生存期，
        恰如绑定引用到临时量（有例外，例如对于初始化非静态类成员）。底层数组可以分配在只读内存。

        意味着C++14前 未必是以数组存储或者作为参数在函数执行期内继续存在?
        由于上述原因,本代码只保证在C++14以上特性的编译器上没问题.
        待办: 改进
    */
    // 解决std::array< T **... > 不被认为是std::array<T const* const*...>这种问题
    template<typename T__> struct const_godie;
    template<typename T__> struct const_godie {
        using Origin_type = T__;
        using type = std::remove_cv_t<T__>;
        constexpr static size_t pointer_count = 0;
    };
    template<typename T__> struct const_godie<T__*> {
        using Origin_type = T__*;
        using type = typename const_godie<T__ >::type*;
        constexpr static size_t pointer_count = const_godie<T__ >::pointer_count + 1;
    };
    template<typename T__> struct const_godie<T__* const> {
        using Origin_type = T__ const*;
        using type = typename const_godie<T__>::type*;
        constexpr static size_t pointer_count = const_godie<T__ >::pointer_count + 1;
    };
    template<typename T__> using const_godie_t = typename const_godie<T__>::type;

    template<typename T__>struct all_have_fucking_const;
    template<typename T__> struct all_have_fucking_const {
        using Origin_type = T__;
        using type = std::add_const_t<T__>;
        constexpr static size_t pointer_count = 0;
    };
    template<typename T__> struct all_have_fucking_const<T__*> {
        using Origin_type = T__;
        using type = std::add_const_t<typename all_have_fucking_const<T__>::type*>;
        constexpr static size_t pointer_count = all_have_fucking_const<T__>::pointer_count + 1;
    };
    template<typename T__> struct all_have_fucking_const<T__* const> {
        using Origin_type = T__;
        using type = typename all_have_fucking_const<T__>::type* const;
        constexpr static size_t pointer_count = all_have_fucking_const<T__>::pointer_count + 1;
    };
    template<typename T__> using all_have_fucking_const_t = typename all_have_fucking_const<T__>::type;

    template<typename T__, typename type_of_size__ = uint32_t> struct Array_general;
    template<typename T__, typename type_of_size__> struct Array_general {
    public:
        using Origin_type = T__;
        using fuck_const_type = const_godie_t<T__>;
        using all_const_type = all_have_fucking_const_t<T__>;
        using pointer_const_godie = fuck_const_type*;
        using pointer_all_const = all_const_type* const;

    public:
        type_of_size__ value_count;
        pointer_const_godie first_value_ptr;
    public:
        inL pointer_const_godie first_value() {
            return first_value_ptr;
        }
        inL pointer_const_godie last_value() {
            return first_value_ptr + (value_count - 1);
        }
        inL pointer_const_godie data() {
            return value_count > 0 ? first_value_ptr : nullptr;
        }
        inL pointer_const_godie data()const {
            return const_cast<pointer_const_godie>(value_count > 0 ? first_value_ptr : nullptr);
        }
        inL type_of_size__ size() {
            return value_count;
        }
        inL type_of_size__ size()const {
            return std::remove_cv_t<type_of_size__>(value_count);
        }
    public:
        inL Array_general()
            : value_count(0)
            , first_value_ptr(nullptr)
        {}
        inL Array_general(pointer_all_const first_value_ptr_, type_of_size__ count_)
            : value_count(count_)
            , first_value_ptr(const_cast<pointer_const_godie>(first_value_ptr_))
        {   }
        inL Array_general(Origin_type& value_ref_)
            : value_count(1)
            , first_value_ptr(const_cast<pointer_const_godie>(&value_ref_))
        {   }
        inL Array_general(std::initializer_list<all_const_type> data_)
            : value_count(static_cast<type_of_size__>(data_.size()))
            , first_value_ptr(const_cast<pointer_const_godie>(data_.begin()))
        {   }
        inL  Array_general(Array_general<Origin_type> const& array_value_)
            : value_count(array_value_.size())
            , first_value_ptr(const_cast<pointer_const_godie>(array_value_.data()))
        {   }
        template<typename CT__>
        inL Array_general(std::vector<CT__>& vector_)
            : value_count(static_cast<type_of_size__>(vector_.size()))
            , first_value_ptr(const_cast<const_godie_t<T__>*>(vector_.data()))
        {   }
        template<typename CT__, type_of_size__ N__>
        inL Array_general(std::array<CT__, N__>& array_)
            : value_count(static_cast<type_of_size__>(array_.size()))
            , first_value_ptr(const_cast<const_godie_t<T__>*>(array_.data()))
        {   }
        template<typename CT__, type_of_size__ N__>
        inL Array_general(CT__(&array_)[N__])
            : value_count(static_cast<type_of_size__>(N__))
            , first_value_ptr(const_cast<const_godie_t<T__>*>(&array_[0]))
        {   }
    public:
        inL fuck_const_type& operator[](size_t index_) {
            return first_value_ptr[index_];
        }
    public:
        inL operator type_of_size__() {
            return value_count;
        }
        inL operator type_of_size__()const {
            return const_cast<type_of_size__>(size());
        }
        inL operator pointer_const_godie() {
            return data();
        }
        inL operator pointer_const_godie()const {
            return const_cast<pointer_const_godie>(data());
        }
    };
    // .
    template<typename type_of_size__> struct Array_general<void, type_of_size__> {
    public:
        type_of_size__ value_count;
        void* first_value_ptr;
        type_of_size__ element_size;
    public:
        inL void* first_value() {
            return first_value_ptr;
        }
        inL void* last_value() {
            return first_value_ptr + (value_count - 1);
        }
        inL void* data() {
            return value_count > 0 ? first_value_ptr : nullptr;
        }
        inL void* data()const {
            return const_cast<void*>(value_count > 0 ? first_value_ptr : nullptr);
        }
        inL type_of_size__ size() {
            return value_count;
        }
        inL type_of_size__ size()const {
            return std::remove_cv_t<type_of_size__>(value_count);
        }
    public:
        inL Array_general()
            : value_count(0)
            , first_value_ptr(nullptr)
            , element_size(0)
        {}
        inL Array_general(Array_general<void, type_of_size__>const& a_)
            : value_count(a_.value_count)
            , first_value_ptr(a_.first_value)
            , element_size(a_.element_size)
        {}
        template<typename T__>
        inL Array_general(T__ const* const first_value_ptr_, type_of_size__ const count_)
            : value_count(count_)
            , first_value_ptr((void*)(first_value_ptr_))
            , element_size(sizeof(T__))
        {   }
        template<typename T__>
        inL Array_general(T__ const& value_ref_)
            : value_count(1)
            , first_value_ptr((void*)&value_ref_)
            , element_size(sizeof(T__))
        {   }
        template<typename T__>
        inL Array_general(std::initializer_list<T__> data_)
            : value_count(static_cast<type_of_size__>(data_.size() * sizeof(T__)))
            , first_value_ptr((void*)data_.begin())
            , element_size(sizeof(T__))
        {   }
        template<typename T__>
        inL Array_general(Array_general<T__> const& array_value_)
            : value_count(array_value_.size() * sizeof(T__))
            , first_value_ptr((void*)array_value_.data())
            , element_size(sizeof(T__))
        {   }
        template<typename T__>
        inL Array_general(std::vector<T__>& vector_)
            : value_count(static_cast<type_of_size__>(vector_.size() * sizeof(T__)))
            , first_value_ptr((void*)vector_.data())
            , element_size(sizeof(T__))
        {   }
        template<typename T__, type_of_size__ N__>
        inL Array_general(std::array<T__, N__>& array_)
            : value_count(static_cast<type_of_size__>(array_.size() * sizeof(T__)))
            , first_value_ptr((void*)array_.data())
            , element_size(sizeof(T__))
        {   }
        template<typename T__, type_of_size__ N__>
        inL Array_general(T__(&array_)[N__])
            : value_count(static_cast<type_of_size__>(N__ * sizeof(T__)))
            , first_value_ptr((void*)&array_[0])
            , element_size(sizeof(T__))
        {   }
    public:
        inL uint8_t& operator[](size_t index_) {
            return *(uint8_t*)&first_value_ptr[index_];
        }
        inL operator type_of_size__() {
            return value_count;
        }
        inL operator type_of_size__()const {
            return const_cast<type_of_size__>(size());
        }
        inL operator void* () {
            return data();
        }
        inL operator void* ()const {
            return (void*)data();
        }
    };



    // 应对句柄的组合/析出问题
    // 命名约束
    // Simple 简单类 无关内存分配的部分 可以作为临时对象
# define Naming_Simple(name__) Si_##name__
    // Basic 基础类 继承于Simple 扩展内存管理的部分 作为一般使用时的对象
# define Naming_Basic(name__) name__
    // SGroup 简单组 无关内存分配的部分 可以作为临时对象 可以将Simple,Basic放入,并且方便API使用连续句柄空间.
# define Naming_SGroup(name__) SG_##name__
    // Group 基础组 扩展内存管理的部分 作为一般使用时的对象
# define Naming_Group(name__) G_##name__

template<typename Handle_t__, typename Founder_t__>
class Si {
public:
    using Handle_t = Handle_t__;
    using Founder_t = Founder_t__;
public:
    Handle_t handle;
    Founder_t* founder_ptr;
public:
    inL Si(Aref<Founder_t> founder_, Handle_t const handle_)
        :handle(handle_), founder_ptr(&founder_.ref)
    {}
    inL Si(Si const& s_) : handle(s_.handle),founder_ptr(s_.founder_ptr) {}
    inL Si(Si const&& s_) : handle(s_.handle), founder_ptr(s_.founder_ptr) {}
public:
    inL operator Handle_t() { return handle; }
    inL operator Handle_t const()const { return handle; }
};

template<typename S__, typename Handle_t__ = S__::Handle_t, typename Founder_t__ = S__::Founder_t>
class SG {
public:
    using Handle_t = Handle_t__;
    using Founder_t = Founder_t__;
public:
    std::vector<Handle_t> handles;
    Founder_t* founder_ptr;
public:
    SG(Aref<Founder_t> founder_) :founder_ptr(founder_), handles(0) {}
    SG(Aref<Founder_t> founder_, Array_general<Handle_t> handles_)
        : founder_ptr(founder_)
        , handles(handles_.size())
    {
        memcpy(handles.data(), handles_.data(), sizeof(Handle_t) * handles_.size());
    }
    SG(SG& sg_) :founder_ptr(sg_.founder_ptr), handles(sg_.handles) {}
    SG(SG&& sg_) :founder_ptr(sg_.founder_ptr), handles(std::move(sg_.handles)) {}
    inL operator Array_general<Handle_t>() { return handles; }
public:
    inL S__ operator[](size_t index_) { return S__(founder_ptr, handles[index_]); }
    inL SG& operator<<(S__& s) {
        if (founder_ptr != nullptr) {
            assert_show(founder_ptr == s.founder_ptr, "founder inconsistent");
        }
        handles.push_back(s);
        founder_ptr = s.founder_ptr;
        return *this;
    }
    inL SG& operator<<(SG& sg_) {
        if (founder_ptr != nullptr) {
            assert_show(founder_ptr == sg_.founder_ptr, "founder inconsistent");
        }
        handles.insert(handles.end(), sg_.handles.begin(), sg_.handles.end());
        if (founder_ptr == nullptr) {
            founder_ptr = sg_.founder_ptr;
        }
        return *this;
    }
    inL SG& operator>>(SG& sg_) { return sg_ << *this; }
};

template<typename S__, typename Handle_t__ = S__::Handle_t, typename Founder_t__ = S__::Founder_t>
class B : public S__ {
public:
    using Handle_t = Handle_t__;
    using Founder_t = Founder_t__;
public:
    Sp<Founder_t> founder_sptr;
    template<typename Founder_sptr__, typename... Args__>
    B(Founder_sptr__&& founder_sptr_, Args__&&... args_)
        : founder_sptr(std::forward<Founder_sptr__>(founder_sptr_))
        , S__(founder_sptr_.get(), std::forward<Args__>(args_)...)
    {
        CODE_POS;
    }
    B(B& obj_) :founder_sptr(obj_.founder_sptr), S__(std::move(obj_)) { CODE_POS; }
    B(B&& obj_) :founder_sptr(std::move(obj_.founder_sptr)), S__(std::move(obj_)) { CODE_POS; }
};

template<typename B__, typename SG__, typename Handle_t__ = SG__::Handle_t, typename Founder_t__ = SG__::Founder_t>
class G :public SG__ {
public:
    using Handle_t = Handle_t__;
    using Founder_t = Founder_t__;
public:
    Sp<Founder_t> founder_sptr;
public:
    template<typename Founder_sptr__, typename... Args__>
    inL G(Founder_sptr__&& founder_sptr_, Args__&&... args_)
        : founder_sptr(std::forward<Founder_sptr__>(founder_sptr_))
        , SG__(founder_sptr_.get(), std::forward<Args__>(args_)...)
    {
        CODE_POS;
    }
    inL G(G& g_) : founder_sptr(g_.founder_sptr), SG__(*this) {
        CODE_POS;
    }
    inL G(G&& g_) : founder_sptr(std::move(g_.founder_sptr)), SG__(std::move(*this)) {
        CODE_POS;
    }
public:
    using SG__::operator<<;
    using SG__::operator>>;
    inL G& operator<<(B__& obj_) {
        if (founder_sptr) {
            assert_show(founder_sptr == obj_.founder_sptr, "founder inconsistent");
        }
        this->handles.push_back(obj_);
        if (founder_sptr == nullptr) {
            founder_sptr = obj_.founder_sptr;
        }
        return *this;
    }
    inL G& operator<<(B__&& obj_) {
        if (founder_sptr) {
            assert_show(founder_sptr == obj_.founder_sptr, "founder inconsistent");
        }
        this->handles.push_back(std::move(obj_));
        if (founder_sptr == nullptr) {
            founder_sptr = obj_.founder_sptr;
        }
        return *this;
    }
    inL G& operator<<(G& obj_) {
        if (founder_sptr) {
            assert_show(founder_sptr == obj_.founder_sptr, "founder inconsistent");
        }
        this->handles.insert(this->handles.end(), obj_.handles.begin(), obj_.handles.end());
        if (founder_sptr == nullptr) {
            founder_sptr = obj_.founder_sptr;
        }
        return *this;
    }
    inL G& operator>>(G& obj_) { return obj_ << *this; }
};



    // 用于展开参数列表
# define Naming_param(name__) name__##_
# define X_DECL_member(type__, name__) type__ name__;
# define X_DECL_param(type__, name__) type__ Naming_param(name__),
# define X_USE_param(type__, name__) name__(Naming_param(name__)),


# define X_USE_basic_copy(type__, name__) name__(obj_param___.name__),
# define X_USE_basic_move(type__, name__) name__(std::move(obj_param___.name__)),

# if 0

# define DEF_Simple(name__, Handle__, Founder__) \
    class Naming_Simple(name__); \
    class Naming_Basic(name__); \
    class Naming_SGroup(name__); \
    class Naming_Group(name__); \
\
    class Naming_Simple(name__) { \
    public:\
        using Founder_t = Founder__;\
        using Handle_t = Handle__;\
    public: \
        Handle__ handle; \
        Founder__* founder_ptr; \
        Xt_##name__##_Smembers(X_DECL_member);\
    public: \
        inL Naming_Simple(name__)( \
            Xt_##name__##_Smembers(X_DECL_param) \
            Handle__ handle_\
            , Aref<Founder__> founder_ \
        )   : Xt_##name__##_Smembers(X_USE_param) handle(handle_) \
            , founder_ptr(&founder_.ref) \
        {} \
        inL operator Handle__() { return handle; } \
        inL operator Handle__ const()const { return handle; } \
    public: \
        Naming_SGroup(name__)& operator>>(Naming_SGroup(name__)& sg_); \
    /*};*/

# define DEF_Basic(name__) \
    class Naming_Basic(name__) : public Naming_Simple(name__) , public std::enable_shared_from_this<name__> { \
    public: \
        using Sptr = Sp<Naming_Basic(name__)>;\
    public: \
        Founder_t::Sptr founder_sptr; \
        Xt_##name__##_Bmembers(X_DECL_member);\
    public: \
        template<typename... Args__> \
        Naming_Basic(name__) ( \
            Xt_##name__##_Bmembers(X_DECL_param) \
            Founder_t::Sptr founder_sptr_, \
            Args__&&... args_ \
        )   : Xt_##name__##_Bmembers(X_USE_param) founder_sptr(founder_sptr_) \
            , Naming_Simple(name__)(std::forward<Args__>(args_)...) \
        {} \
        Naming_Basic(name__) (Naming_Basic(name__)&& obj_param___) \
            : Xt_##name__##_Bmembers(X_USE_basic_move) \
            founder_sptr(std::move(obj_param___.founder_sptr)) \
            , Naming_Simple(name__)(std::move(obj_param___)) \
        {} \
        Naming_Basic(name__)(Naming_Basic(name__)& obj_param___) \
            : Xt_##name__##_Bmembers(X_USE_basic_copy) \
            founder_sptr(obj_param___.founder_sptr)\
            , Naming_Simple(name__)(std::move(obj_param___)) \
        {} \
    public: \
        using Naming_Simple(name__) ::operator>>; \
        Naming_Group(name__)& operator>>(Naming_Group(name__)& g_); \
    /*};*/

# define DEF_SG(name__) \
    class Naming_SGroup(name__) { \
    public:\
        using Founder_t = Naming_Simple(name__)::Founder_t;\
        using Handle_t = Naming_Simple(name__)::Handle_t;\
    public: \
        std::vector<Handle_t> handles; \
        Founder_t* founder_ptr; \
        Xt_##name__##_SGmembers(X_DECL_member); \
    public: \
        Naming_SGroup(name__)(Xt_##name__##_SGmembers(X_DECL_param) Founder_t* founder_ptr_) \
            : Xt_##name__##_SGmembers(X_USE_param) founder_ptr(founder_ptr_)\
            , handles(0) \
        {} \
        Naming_SGroup(name__)(Xt_##name__##_SGmembers(X_DECL_param) Founder_t* founder_ptr_, Array_general<Handle_t> handles_)   : Xt_##name__##_SGmembers(X_USE_param) founder_ptr(founder_ptr_) \
            , handles(handles_.size()) \
        { memcpy(handles.data(), handles_.data(), sizeof(Handle_t) * handles_.size()); } \
        Naming_SGroup(name__)(Naming_SGroup(name__)& obj_param___) \
            : Xt_##name__##_SGmembers(X_USE_basic_copy) \
            founder_ptr(obj_param___.founder_ptr) \
            , handles(obj_param___.handles) \
        {} \
        Naming_SGroup(name__)(Naming_SGroup(name__)&& obj_param___) \
            : Xt_##name__##_SGmembers(X_USE_basic_move) \
            founder_ptr(obj_param___.founder_ptr) \
            , handles(std::move(obj_param___.handles)) \
        {} \
    public: \
        inL operator Array_general<Handle_t>() { return handles; } \
        Naming_SGroup(name__)& operator<<(Naming_Simple(name__)& s); \
        Naming_SGroup(name__)& operator<<(Naming_SGroup(name__)& sg_); \
        Naming_SGroup(name__)& operator>>(Naming_SGroup(name__)& sg_); \
    /*};*/

#define DEF_G(name__) \
    class Naming_Group(name__) :public Naming_SGroup(name__) { \
    public: \
        using Sptr = Sp<Naming_Group(name__)>; \
    public: \
        Founder_t::Sptr founder_sptr; \
        Xt_##name__##_Gmembers(X_DECL_member); \
    public: \
        template<typename... Args__> \
        Naming_Group(name__)(Xt_##name__##_Gmembers(X_DECL_param) Founder_t::Sptr founder_sptr_, Args__&&... args_) \
            : Xt_##name__##_Gmembers(X_USE_param) founder_sptr(founder_sptr_) \
            , Naming_SGroup(name__)(std::forward<Args__>(args_)...) \
        {} \
    public: \
        using Naming_SGroup(name__)::operator<<; \
        using Naming_SGroup(name__)::operator>>; \
        inL Naming_Group(name__)& operator<<(Naming_Basic(name__)& b_); \
        inL Naming_Group(name__)& operator<<(Naming_Basic(name__)&& b_); \
        inL Naming_Group(name__)& operator<<(Naming_Group(name__)& g_); \
        inL Naming_Group(name__)& operator>>(Naming_Group(name__)& g_); \

# define END_G(name__) \
    }; \
    inL Naming_SGroup(name__)& Naming_Simple(name__)::operator>>(Naming_SGroup(name__)& sg_) { return (sg_ << *this); } \
    inL Naming_Group(name__)& Naming_Basic(name__)::operator>>(Naming_Group(name__)& g_) { return g_ << *this; } \
    inL Naming_SGroup(name__)& Naming_SGroup(name__)::operator>>(Naming_SGroup(name__)& sg_) { return sg_ << *this; } \
    inL Naming_Group(name__)& Naming_Group(name__)::operator>>(Naming_Group(name__)& g_) { return g_ << *this; } \
\
    inL Naming_SGroup(name__)& Naming_SGroup(name__)::operator<<(Naming_Simple(name__)& s) { \
        if (founder_ptr != nullptr) { \
            assert_show(founder_ptr == s.founder_ptr, "founder inconsistent"); \
        } \
        handles.push_back(s); \
        founder_ptr = s.founder_ptr; \
        return *this; \
    } \
    inL Naming_Group(name__)& Naming_Group(name__)::operator<<(Naming_Basic(name__)& b_) { \
        if (founder_sptr) { \
            assert_show(founder_sptr == b_.founder_sptr, "founder inconsistent"); \
        } \
        handles.push_back(b_); \
        if (founder_sptr == nullptr) { \
            founder_sptr = b_.founder_sptr; \
        } \
        return *this; \
    } \
    inL Naming_Group(name__)& Naming_Group(name__)::operator<<(Naming_Basic(name__)&& b_) { \
        if (founder_sptr) { \
            assert_show(founder_sptr == b_.founder_sptr, "founder inconsistent"); \
        } \
        handles.push_back(std::move(b_)); \
        if (founder_sptr == nullptr) { \
            founder_sptr = b_.founder_sptr; \
        } \
        return *this; \
    } \
    inL Naming_SGroup(name__)& Naming_SGroup(name__)::operator<<(Naming_SGroup(name__)& sg_) { \
        if (founder_ptr != nullptr) { \
            assert_show(founder_ptr == sg_.founder_ptr, "founder inconsistent"); \
        } \
        handles.insert(handles.end(), sg_.handles.begin(), sg_.handles.end()); \
        founder_ptr = sg_.founder_ptr; \
        return *this; \
    } \
    inL Naming_Group(name__)& Naming_Group(name__)::operator<<(Naming_Group(name__)& g_) { \
        if (founder_sptr) { \
            assert_show(founder_sptr == g_.founder_sptr, "founder inconsistent"); \
        } \
        handles.insert(handles.end(), handles.begin(), handles.end()); \
        if (founder_sptr == nullptr) { \
            founder_sptr = g_.founder_sptr; \
        } \
        return *this; \
    };

# define END_DEF };

# endif // if 0


    // 执行链 委托Delegate 随便别人叫它什么 我叫它执行链.
    // 参考书《游戏引擎原理与实践 卷1 基础框架》 作者:程东哲 第四章 第四节
    // 待办 实现可放入匿名函数
    template<typename Ret__, typename... Args__>
    class Exec_chain {
    public:
        using ExecFunctionPtr_t = Ret__(*)(void* obj_, Args__...);
        using FunctionPtr_t = Ret__(*)(Args__...);
        template<typename T__>
        using MethodPtr_t = Ret__(T__::*)(Args__...);
    
        class Node {
        public:
            using ExecFunctionPtr_t = Ret__(*)(void* obj_, Args__...);
            using FunctionPtr_t = Ret__(*)(Args__...);
            template<typename T__>
            using MethodPtr_t = Ret__(T__::*)(Args__...);
            friend Exec_chain;
        public:
            void* ptr;
            ExecFunctionPtr_t exec_function_ptr;
            bool use_wptr;
            Wp<void> wptr;

            Node():ptr(nullptr),exec_function_ptr(nullptr),wptr(), use_wptr(nullptr) {}
        public:
            template<FunctionPtr_t func_>
            static Ret__ exec_function(void* obj_, Args__... args_) {
                return func_(args_...);
            }
            template<typename T__, MethodPtr_t<T__> func_>
            static Ret__ exec_method(void* obj_, Args__... args_) {
                return ( ((T__*)obj_)->*func_)(args_...);
            }
            template<typename T__, MethodPtr_t<T__>const func_>
            static Ret__ exec_method_const(void* obj_, Args__... args_) {
                return (((T__*)obj_)->*func_)(args_...);
            }
        public:
            template<FunctionPtr_t func_>
            inL void set_exec() {
                ptr = nullptr;
                wptr.reset();
                use_wptr = false;
                exec_function_ptr = &exec_function<func_>;
            }

            template<typename T__, MethodPtr_t<T__> func_>
            inL void set_exec(void* ptr_, Wp<void> wp_) {
                ptr = ptr_;
                wptr = wp_;
                use_wptr = true;
                exec_function_ptr = &exec_method<T__, func_>;
            }
            template<typename T__, MethodPtr_t<T__>const func_>
            inL void set_exec_const(void* ptr_, Wp<void> wp_) {
                ptr = ptr_;
                wptr = wp_;
                use_wptr = true;
                exec_function_ptr = &exec_method<T__, func_>;
            }

            template<typename T__, MethodPtr_t<T__> func_>
            inL void set_exec(void* obj_) {
                ptr = obj_;
                wptr.reset();
                use_wptr = false;
                exec_function_ptr = &exec_method<T__, func_>;
            }
            template<typename T__, MethodPtr_t<T__>const func_>
            inL void set_exec_const(void* obj_){
                ptr = obj_;
                wptr.reset();
                use_wptr = false;
                exec_function_ptr = &exec_method<T__, func_>;
            }
        public:
            inL operator bool() const { return ptr != nullptr;}
            inL bool operator!()const { return !(operator bool()); }
            inL bool operator==(Node const& r_)const {
                return (ptr == r_.ptr) && (exec_function_ptr == r_.exec_function_ptr);
            }
            inL bool operator<(Node const& r_)const {
                if (exec_function_ptr < r_.exec_function_ptr) {
                    return true;
                }
                else if(exec_function_ptr > r_.exec_function_ptr) {
                    return false;
                }
                return ptr < r_.ptr;
            }
            inL bool operator>(Node const& r_)const {
                if (exec_function_ptr > r_.exec_function_ptr) {
                    return true;
                }
                else if (exec_function_ptr < r_.exec_function_ptr) {
                    return false;
                }
                return ptr > r_.ptr;
            }
        };
    public:
        std::set<Node> chain;
    public:
        template<typename FunctionPtr_t func_>
        inL void add() {
            Node node;
            node.set_exec<func_>();
            chain.insert(node);
        };

        template<typename T__, MethodPtr_t<T__> func_>
        inL void add(void* ptr_) {
            Node node;
            node.set_exec<T__, func_>(ptr_);
            chain.insert(node);
        }
        template<typename T__, MethodPtr_t<T__> func_>
        inL void add(void* ptr_, Wp<void> wp_) {
            Node node;
            node.set_exec<T__, func_>(ptr_, wp_);
            chain.insert(node);
        }

        template<typename T__, MethodPtr_t<T__>const func_>
        inL void add_const(void* ptr_) {
            Node node;
            node.set_exec<T__, func_>(ptr_);
            chain.insert(node);
        }
        template<typename T__, MethodPtr_t<T__>const func_>
        inL void add_const(void* ptr_, Wp<void> wp_) {
            Node node;
            node.set_exec_const<T__, func_>(ptr_, wp_);
            chain.insert(node);
        }

        template<typename FunctionPtr_t func_>
        inL void remove() {
            Node node;
            node.set_exec<func_>();
            chain.erase(node);
        };

        template<typename T__, MethodPtr_t<T__> func_>
        inL void remove(void* ptr_) {
            Node node;
            node.set_exec<T__, func_>(ptr_);
            chain.erase(node);
        }
        template<typename T__, MethodPtr_t<T__> func_>
        inL void remove(void* ptr_, Wp<void> wp_) {
            Node node;
            node.set_exec<T__, func_>(ptr_, wp_);
            chain.erase(node);
        }

        template<typename T__, MethodPtr_t<T__>const func_>
        inL void remove_const(void* ptr_) {
            Node node;
            node.set_exec<T__, func_>(ptr_);
            chain.erase(node);
        }
        template<typename T__, MethodPtr_t<T__>const func_>
        inL void remove_const(void* ptr_, Wp<void> wp_) {
            Node node;
            node.set_exec_const<T__, func_>(ptr_, wp_);
            chain.erase(node);
        }

        inL void operator()(Args__... args_) {
            for (auto it = chain.begin(); it != chain.end(); ) {
                Sp<void> sptr;
                if (it->use_wptr) {
                    sptr = it->wptr.lock();
                    if (!sptr) {
                        it = chain.erase(it);
                        continue;
                    }
                }
                it->exec_function_ptr(it->ptr, args_...);
                ++it;
            }
        }
        inL bool has(Node& node_) {
            auto it = chain.find(node_);
            return it != chain.end();
        }
        inL void clear() {
            chain.clear();
        }
    };

    // 直接这样用得了
    template<typename Ret__, typename... Args__>
    class Call_chain {
    public:
        using Functional_t = std::function<Ret__ (Args__...)>;
        class Node {
        public:
            Functional_t functional;
            Wp<void> wptr;
            bool has_wptr;
        public:
            template<typename Wp_t__, typename Functional_t__>
            Node(Wp_t__&& wptr_, Functional_t__&& functional_)
                : functional(std::forward<Functional_t__>(functional_))
                , wptr(std::forward<Wp_t__>(wptr_))
                , has_wptr(true)
            {}
            template<typename Functional_t__>
            Node(Functional_t__ && functional_)
                : functional(std::forward<Functional_t__>(functional_))
                , wptr()
                , has_wptr(false)
            {}
            inL Node(Node& r_):wptr(r_.wptr), has_wptr(r_.has_wptr), functional(r_.functional){}
            inL Node(Node&& r_) : wptr(std::move(r_.wptr)), has_wptr(r_.has_wptr), functional(std::move(r_.functional)) {}
        public:
            inL bool operator<(Node const& r_)const {
                return functional < r_.functional;
            }
            inL bool operator == (Node const& r_)const {
                return functional == r_.functional;
            }
        };
    public:
        std::list<Node> chain;
        
        template<typename Func_t__>
        void add(Func_t__&& f_) {
            chain.push_back({ std::forward<Func_t__>(f_) });
        }
        template<typename Wp_t__, typename Func_t__>
        void add(Wp_t__&& wptr_, Func_t__&& functional_) {
            chain.push_back({ std::forward<Wp_t__>(wptr_), std::forward<Func_t__>(functional_) });
        }

        inL void operator()(Args__... args_) {
            for (auto it = chain.begin(); it != chain.end(); ) {
                Sp<void> sptr;
                if (it->has_wptr) {
                    sptr = it->wptr.lock();
                    if (!sptr) {
                        it = chain.erase(it);
                        continue;
                    }
                }
                it->functional(args_...);
                ++it;
            }
        }

    };


    namespace detail{
        // 很无语的用于函数模板偏特化
        struct Yes { public: static constexpr bool v = true; int ret = v; };
        struct No { public: static constexpr bool v = false; int ret = v; };
        template<bool is__> struct Ret;
        template<>struct Ret<true> { using X = Yes; };
        template<>struct Ret<false> { using X = No; };
        // 很无语的用于函数模板偏特化
        template <typename T__> struct has_handles {
            template<typename U__> static void check(decltype(&U__::handles));
            template<typename U__> static int check(...);
            static constexpr bool v = std::is_void<decltype(check<T__>(0))>::value;
        };
        template <typename T__> using has_handles_v = typename Ret<has_handles<T__>::v>::X;
    } // namespace detail{

    namespace bitop {
        DEF_module_sole char r_zero_table[] = {
            32,0,1,12,2,6,-1,13,
            3,-1,7,-1,-1,-1,-1,14,
            10,4,-1,-1,8,-1,-1,25,
            -1,-1,-1,-1,-1,21,27,15,
            31,11,5,-1,-1,-1,-1,-1,
            9,-1,-1,24,-1,-1,20,26,
            30,-1,-1,-1,-1,23,-1,19,
            29,-1,22,18,28,17,16,-1
        };
        inL int r_zero(uint32_t n_) {
            n_ = (n_ & -int32_t(n_)) * 0x0450fbaf;
            return r_zero_table[n_ >> 26];
        }
        inL int l_zero(uint32_t flags_) {
            union {
                uint32_t int_value[2];
                double double_value;
            };
            int n;
            double_value = (double)flags_ + 0.5;
            n = 1054 - (int_value[1] >> 20);
            return n;
        }
        
        template<typename T__>
        inL T__ r_close(T__ fb_) { return fb_ & (fb_ - 1); }
        template<typename T__>
        inL T__ r_bit(T__ fb_) { return r_close(fb_) ^ fb_; }
        template<typename T__>
        inL T__ l_bit(T__ fb_) { return 1 << ((sizeof(T__)*8-1) - l_zero(fb_)); }
        template<typename T__>
        inL T__ l_close(T__ fb_) { return ~l_bit(fb_) & fb_; }
    } // namespace bitop

    template<size_t d__ = 1> class ID_Pool {
    public:
        size_t curr_id;
        std::list<size_t> rest;

        ID_Pool(size_t id_) :curr_id(id_) {}
        size_t get() {
            size_t result;
            if (rest.empty()) {
                result = rest.front();
                rest.erase(rest.begin());
            }
            else {
                result = curr_id;
                curr_id += d__;
            }
            return result;
        }
        void give_back(size_t id_) {
            rest.emplace_back(id_);
        }
    };

} // namespace dawn { 


# endif // # ifndef __dawn_COMMON_HPP__
