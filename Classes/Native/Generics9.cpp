#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.Events.InvokableCall
struct InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Subsystem
struct Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskExceptionHolder
struct TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>
struct Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Resources.ResourceLocator>
struct Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Threading.Tasks.VoidTaskResult>
struct Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Collections.Generic.IComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IComparer_1_t40B525B485A7A89ABCFC5E1266A05F346524377D;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEqualityComparer_1_tD2AF20E67D8624289AE792EE7E48B879EEF614ED;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9;
// System.Collections.Generic.SortedList`2/KeyList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyList_t296975AE18449739E9E0D36201870D32AD100126;
// System.Collections.Generic.SortedList`2/KeyList<System.Object,System.Object>
struct KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Object,System.Object>
struct Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>
struct Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B;
// System.Collections.Generic.SortedList`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230;
// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Object,System.Object>
struct Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t940E220E7BF619735AEB4307D08C2B732FD50F17;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct TrackingSubsystem_2_tF79BBAD8B9196143398CDA4B5824261B5546A012;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_t996FDA9D3A93102756CBF57E7B9AA9502F185EBB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_t1B8616CDEBD2E6336B863790A17429FDAE52BE94;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct TrackingSubsystem_2_tEF849A9635045F125E491A8548A9C02EDF83A21B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_tE5DCDA2AE4A2A8726923CF4B64E99A303DF95F36;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_t5E87AF02E595B31BFDED1907F5C8E878D4F6376D;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t08B895827D14FBF9A65858E5EE23626AF78A0EE8;
// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E;
// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_t936566050E79A53330A93469CAF15575A12A114D;
// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63;
// System.Collections.Generic.SortedList`2/ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A;
// System.Collections.Generic.SortedList`2/ValueList<System.Object,System.Object>
struct ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>[]
struct EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0;
// System.Exception
struct Exception_t;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Collections.Concurrent.ConcurrentDictionary`2/Node<System.Object,System.Object>[]
struct NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemInstances_tA72C27A074ABEA48D0E813D2247349B55D160395_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral336703A716E6AABC0F3D29AA7F207E54FF0E7ACC;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432;
IL2CPP_EXTERN_C String_t* _stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003;
IL2CPP_EXTERN_C String_t* _stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral812EC03C4AEF0AE76BA178C4367F385393486DE8;
IL2CPP_EXTERN_C String_t* _stringLiteral85C45295DCFC26EE88F650ADE22BFF7E053E5658;
IL2CPP_EXTERN_C String_t* _stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Add_mA868EA144DB2B813E52858FCE00E7308EC56D479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Add_mEDFAA24C8377C6686846F171F13A4738C572B34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Insert_m1AB2E5F947710A95F1BA43456117C68B757C3790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Insert_m8236530EE2C1F4DF70CC78C09641213202543B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Remove_m45733D09CEC292C4EBBB1D6127FAC8C9F1E903C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_Remove_m7FB4206E1E278B7458191E5CC816ED23EB517534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_set_Item_mA78D7F0F2DF49C6F8215C1A7B871FFC6D44493BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueList_set_Item_mC1C2DF772219861FD6D6C77E2E4ED58E43A3D990_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t SubsystemDescriptor_1_Create_m537FEAC87E414397DBE61201BEC410A4D65EFC19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemLifecycleManager_2_CreateSubsystem_m8F7730493D8777A7CD4CB26E155AF86D8774BB76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m9CE58A9E0AEBEC179789A5DC6533A8ABA0376338_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m0E154B54952313C68BE249DC65272D106C202E8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m37A2A89D16FE127FD4C1125B71D30EE0AD5F7547_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m4147FD562A52E37964BFF472DB939744FBA7DA29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m4614FE775E152B2268F056D9A0504CD31B935DEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m54069BFDCD1C670A3713A298C56D7F1AF86C5316_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m6A14EF254702334006629FCB5647C803860A7CDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_m7EC33EF34F64114A8D152BBAC30B8863F55D8E57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mA972BE2F2787EBC865852B68C10F851828096F93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mB341E7553AAAEB403760159C837759AC0C7B2F20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mC02DD409D1C1B359B32C6B4F4C06F690D8CFCABC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mCCDDF351A22140292DE88EC77D8C644A647AE619_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mDDC922A10C49DB4478ADAB2E20B79AA6C2C105D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mEB7932B4A44919389589CACDC1D443AB2D1681FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mEB79C972D350C5A7B7FF71C2846403554423D1FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1__ctor_mFC380BDDF1AF18F401DBE606D16B29C5A7170D8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_Equals_m7904D914C7F0D8920A3F2F0FB05BDA201DC34F7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_Equals_mC13D56B08E3BF9AE03134F713E88F59AF49E0986_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_GetHashCode_m56B88A8B03BF1856556DB8527DB575A497601841_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_GetHashCode_m93554844C338C3CFF8715DF628FCE38039872674_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_Collections_IStructuralEquatable_Equals_m76DD43DE79BB19BCD41673F706D96FE167C894B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_Collections_IStructuralEquatable_Equals_mB8764DDC777A14644C984149BC346B303F8CB7E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m6A8402570FA26D368443512574A0A03CBFAB7585_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mC537B0B94B81AFE40F05E07B16B6741735D1A376_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_IComparable_CompareTo_m0FB81164CA69BB5F29772A077579254D3F7EE3D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_IComparable_CompareTo_m9F56832E563506449F01AB0020EDF8E99AD82E4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_ITupleInternal_ToString_m910380308358C7A726EC2516E3C9D9BD1E5F8EB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_System_ITupleInternal_ToString_mC29992D30719486284F41C1DC333E9A321947EBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_ToString_m2E2FEB492CEDA8B61F6869909C0376A8F0DEEE9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_2_ToString_m4F1D997C1F791EC93E8E153E25B8802A2A111436_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_Equals_mE4282D65B2614390D3D6131F38CA4F71E38BD30B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_GetHashCode_m1AED3AC52D43DA1716AA4458567FC4E6F7454B1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_System_Collections_IStructuralEquatable_Equals_mC0D0C105DDA322C1B2E2BEF716D15EE7E7A97B04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m64C75EE1F144BBF0539D92AEC518ECEF964CC28A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_System_IComparable_CompareTo_m66B7166E41172B9AC64C38A6EA9B0A7FF946F01C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_System_ITupleInternal_ToString_m5B9310EE550CC41905FF3002D70DEB87884DED37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tuple_3_ToString_m96B918423D9BBE3EA66EBFE4A617DFF628ECEA42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m50A0084C1E73C78361F32170CF616D08681D7380_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mA6A81E3B39C49A2A483B7EC5A7FC6F305C84BDCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mEAA1361DECE0C4E7F731346AD77D6999664527CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mF4A4312C4C5D7EC10F1D0AC32360D20951F3E276_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_mDCEEB031BDBB99CF9F4FD8C66C8764E7145F233E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_mEA01486964659C4609BA96B58825B2E9B851FE10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m883CB9322DD397C11303E11CE1D75DE4DAB7A2A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mAEF284CEE451CDF002B423EAD1920E36A12A9CF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m9DEDA5637D671AC58D580000A01B4B335B9923F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_m28C35DB6F6DBCF1315EC5755FBA0B5DB80822DB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_4_FindMethod_Impl_m18804249F2696D07B6E5723A86A95E2A98424E62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Add_mA868EA144DB2B813E52858FCE00E7308EC56D479_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Add_mEDFAA24C8377C6686846F171F13A4738C572B34C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Insert_m1AB2E5F947710A95F1BA43456117C68B757C3790_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Insert_m8236530EE2C1F4DF70CC78C09641213202543B8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Remove_m45733D09CEC292C4EBBB1D6127FAC8C9F1E903C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_Remove_m7FB4206E1E278B7458191E5CC816ED23EB517534_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_set_Item_mA78D7F0F2DF49C6F8215C1A7B871FFC6D44493BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueList_set_Item_mC1C2DF772219861FD6D6C77E2E4ED58E43A3D990_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68DGenerics9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8Generics9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Concurrent.ConcurrentDictionary`2_Node<System.Object,System.Object>
struct  Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9  : public RuntimeObject
{
public:
	// TKey System.Collections.Concurrent.ConcurrentDictionary`2_Node::_key
	RuntimeObject * ____key_0;
	// TValue System.Collections.Concurrent.ConcurrentDictionary`2_Node::_value
	RuntimeObject * ____value_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2_Node<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2_Node::_next
	Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * ____next_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2_Node::_hashcode
	int32_t ____hashcode_3;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____next_2)); }
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * get__next_2() const { return ____next_2; }
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__hashcode_3() { return static_cast<int32_t>(offsetof(Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9, ____hashcode_3)); }
	inline int32_t get__hashcode_3() const { return ____hashcode_3; }
	inline int32_t* get_address_of__hashcode_3() { return &____hashcode_3; }
	inline void set__hashcode_3(int32_t value)
	{
		____hashcode_3 = value;
	}
};


// System.Collections.Concurrent.ConcurrentDictionary`2_Tables<System.Object,System.Object>
struct  Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2_Node<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2_Tables::_buckets
	NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* ____buckets_0;
	// System.Object[] System.Collections.Concurrent.ConcurrentDictionary`2_Tables::_locks
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____locks_1;
	// System.Int32[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2_Tables::_countPerLock
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____countPerLock_2;

public:
	inline static int32_t get_offset_of__buckets_0() { return static_cast<int32_t>(offsetof(Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA, ____buckets_0)); }
	inline NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* get__buckets_0() const { return ____buckets_0; }
	inline NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A** get_address_of__buckets_0() { return &____buckets_0; }
	inline void set__buckets_0(NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* value)
	{
		____buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of__locks_1() { return static_cast<int32_t>(offsetof(Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA, ____locks_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__locks_1() const { return ____locks_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__locks_1() { return &____locks_1; }
	inline void set__locks_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____locks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locks_1), (void*)value);
	}

	inline static int32_t get_offset_of__countPerLock_2() { return static_cast<int32_t>(offsetof(Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA, ____countPerLock_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__countPerLock_2() const { return ____countPerLock_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__countPerLock_2() { return &____countPerLock_2; }
	inline void set__countPerLock_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____countPerLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____countPerLock_2), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct  ValueCollection_tF53EAC075C536C6BBEDD4AF0E2FC653DF9EE866C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tF53EAC075C536C6BBEDD4AF0E2FC653DF9EE866C, ___dictionary_0)); }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1D971BA151CCF2A891990C13C7561FEC253BC7CF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.Int32,System.Object>
struct  ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.Object,System.Int32>
struct  ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC88EAA780CBFDC83B1E62A4418478872C1CAE848, ___dictionary_0)); }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.Object,System.Object>
struct  ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.Object,System.Resources.ResourceLocator>
struct  ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t801673EF9238D6284F9D0027C8B1420DC72FFDAC, ___dictionary_0)); }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1A7031D56269D606C19F997EEDB8F24872DACD94 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63, ___dictionary_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>
struct  ValueCollection_t717796FB49620F46508DE171A43D148E5CAC0101  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t717796FB49620F46508DE171A43D148E5CAC0101, ___dictionary_0)); }
	inline Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2B5C2948D35C014478CA4F20AAD1D04720D764DA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___entries_1)); }
	inline EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t46B921DAC8AFC9E5DD2806FD180E64A579F451A0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___keys_7)); }
	inline KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t54D5A22865BD8C8B7FE100CD11D8FDBA0A5DA6B9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ___values_8)); }
	inline ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0F78ECFD49F45BF7DA0F7598BD7C63E6D9F1CF63 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t570CBF7FBDDEACA4C5E08A107956C5126C6AB8CC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2_SortedListValueEnumerator<System.Object,System.Object>
struct  SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_sortedList
	SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * ____sortedList_0;
	// System.Int32 System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_currentValue
	RuntimeObject * ____currentValue_3;

public:
	inline static int32_t get_offset_of__sortedList_0() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____sortedList_0)); }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * get__sortedList_0() const { return ____sortedList_0; }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 ** get_address_of__sortedList_0() { return &____sortedList_0; }
	inline void set__sortedList_0(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * value)
	{
		____sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortedList_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__currentValue_3() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838, ____currentValue_3)); }
	inline RuntimeObject * get__currentValue_3() const { return ____currentValue_3; }
	inline RuntimeObject ** get_address_of__currentValue_3() { return &____currentValue_3; }
	inline void set__currentValue_3(RuntimeObject * value)
	{
		____currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2_SortedListValueEnumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_sortedList
	SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * ____sortedList_0;
	// System.Int32 System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.SortedList`2_SortedListValueEnumerator::_currentValue
	RuntimeObject * ____currentValue_3;

public:
	inline static int32_t get_offset_of__sortedList_0() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____sortedList_0)); }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * get__sortedList_0() const { return ____sortedList_0; }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 ** get_address_of__sortedList_0() { return &____sortedList_0; }
	inline void set__sortedList_0(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * value)
	{
		____sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sortedList_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__currentValue_3() { return static_cast<int32_t>(offsetof(SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5, ____currentValue_3)); }
	inline RuntimeObject * get__currentValue_3() const { return ____currentValue_3; }
	inline RuntimeObject ** get_address_of__currentValue_3() { return &____currentValue_3; }
	inline void set__currentValue_3(RuntimeObject * value)
	{
		____currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>
struct  ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2_ValueList::_dict
	SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * ____dict_0;

public:
	inline static int32_t get_offset_of__dict_0() { return static_cast<int32_t>(offsetof(ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940, ____dict_0)); }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * get__dict_0() const { return ____dict_0; }
	inline SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 ** get_address_of__dict_0() { return &____dict_0; }
	inline void set__dict_0(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * value)
	{
		____dict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dict_0), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2_ValueList::_dict
	SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * ____dict_0;

public:
	inline static int32_t get_offset_of__dict_0() { return static_cast<int32_t>(offsetof(ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A, ____dict_0)); }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * get__dict_0() const { return ____dict_0; }
	inline SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 ** get_address_of__dict_0() { return &____dict_0; }
	inline void set__dict_0(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * value)
	{
		____dict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dict_0), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct  SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0  : public RuntimeObject
{
public:
	// TKey[] System.Collections.Generic.SortedList`2::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// TValue[] System.Collections.Generic.SortedList`2::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.Generic.SortedList`2::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.SortedList`2::version
	int32_t ___version_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.Generic.SortedList`2_KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::keyList
	KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC * ___keyList_5;
	// System.Collections.Generic.SortedList`2_ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::valueList
	ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * ___valueList_6;
	// System.Object System.Collections.Generic.SortedList`2::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___keyList_5)); }
	inline KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_tA295C9817D6A655E7CB7BE14FC0A630C5A4107BC * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ___valueList_6)); }
	inline ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};


// System.Collections.Generic.SortedList`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230  : public RuntimeObject
{
public:
	// TKey[] System.Collections.Generic.SortedList`2::keys
	TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* ___keys_0;
	// TValue[] System.Collections.Generic.SortedList`2::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.Generic.SortedList`2::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.SortedList`2::version
	int32_t ___version_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.Generic.SortedList`2_KeyList<TKey,TValue> System.Collections.Generic.SortedList`2::keyList
	KeyList_t296975AE18449739E9E0D36201870D32AD100126 * ___keyList_5;
	// System.Collections.Generic.SortedList`2_ValueList<TKey,TValue> System.Collections.Generic.SortedList`2::valueList
	ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * ___valueList_6;
	// System.Object System.Collections.Generic.SortedList`2::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___keys_0)); }
	inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* get_keys_0() const { return ___keys_0; }
	inline TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(TrackableIdU5BU5D_t3C5D162B5DC148F9E6F8749AAEDA02170DDF38D0* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___keyList_5)); }
	inline KeyList_t296975AE18449739E9E0D36201870D32AD100126 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t296975AE18449739E9E0D36201870D32AD100126 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t296975AE18449739E9E0D36201870D32AD100126 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ___valueList_6)); }
	inline ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};


// System.Collections.LowLevelComparer
struct  LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields, ___Default_0)); }
	inline LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Linq.Enumerable_Iterator`1<System.Object>
struct  Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.Threading.Tasks.SystemThreadingTasks_FutureDebugView`1<System.Object>
struct  SystemThreadingTasks_FutureDebugView_1_t4C9A912669598580918A4250B4641B02F31CD089  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.Task`1_<>c<System.Boolean>
struct  U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D_StaticFields
{
public:
	// System.Threading.Tasks.Task`1_<>c<TResult> System.Threading.Tasks.Task`1_<>c::<>9
	U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.Tasks.Task`1_<>c<System.Int32>
struct  U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E_StaticFields
{
public:
	// System.Threading.Tasks.Task`1_<>c<TResult> System.Threading.Tasks.Task`1_<>c::<>9
	U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.Tasks.Task`1_<>c<System.Object>
struct  U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950_StaticFields
{
public:
	// System.Threading.Tasks.Task`1_<>c<TResult> System.Threading.Tasks.Task`1_<>c::<>9
	U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.Tasks.Task`1_<>c<System.Threading.Tasks.VoidTaskResult>
struct  U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1_StaticFields
{
public:
	// System.Threading.Tasks.Task`1_<>c<TResult> System.Threading.Tasks.Task`1_<>c::<>9
	U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Char>
struct  Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item2_1)); }
	inline Il2CppChar get_m_Item2_1() const { return ___m_Item2_1; }
	inline Il2CppChar* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Il2CppChar value)
	{
		___m_Item2_1 = value;
	}
};


// System.Tuple`2<System.Object,System.Object>
struct  Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`3<System.Object,System.Object,System.Object>
struct  Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	RuntimeObject * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}
};


// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct  Tuple_4_t936566050E79A53330A93469CAF15575A12A114D  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};


// System.Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct  Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	RuntimeObject * ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	RuntimeObject * ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item3_2)); }
	inline RuntimeObject * get_m_Item3_2() const { return ___m_Item3_2; }
	inline RuntimeObject ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(RuntimeObject * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44, ___m_Item4_3)); }
	inline RuntimeObject * get_m_Item4_3() const { return ___m_Item4_3; }
	inline RuntimeObject ** get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(RuntimeObject * value)
	{
		___m_Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item4_3), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Subsystem
struct  Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Linq.Enumerable_WhereArrayIterator`1<System.Object>
struct  WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>
struct  WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Boolean>
struct  ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Threading.Tasks.VoidTaskResult>
struct  ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071, ___m_task_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct  TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct  TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>
struct  TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC, ___m_task_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Events.InvokableCall
struct  InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741, ___Delegate_0)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9, ___Delegate_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF, ___Delegate_0)); }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90, ___Delegate_0)); }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870, ___Delegate_0)); }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD  : public BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD, ___Delegate_0)); }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<System.Object>
struct  SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A  : public SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245
{
public:

public:
};


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct  TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___m_Trackables_0;

public:
	inline static int32_t get_offset_of_m_Trackables_0() { return static_cast<int32_t>(offsetof(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2, ___m_Trackables_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_m_Trackables_0() const { return ___m_Trackables_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_m_Trackables_0() { return &___m_Trackables_0; }
	inline void set_m_Trackables_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___m_Trackables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___key_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_key_0() const { return ___key_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Enumerable_WhereListIterator`1<System.Object>
struct  WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>
struct  ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t286C97C0AF102C4C0BE55CE2025CC7BD1FB5C20C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct  ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct  ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>
struct  ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t30C5878AF5DC4D86F458B73EF33EAF5BFA254071  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.StackCrawlMark
struct  StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.InternalTaskOptions
struct  InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF 
{
public:
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.Task_ContingentProperties
struct  ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Threading.Tasks.Task_ContingentProperties::m_capturedContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_capturedContext_0;
	// System.Threading.ManualResetEventSlim modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_completionEvent
	ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * ___m_completionEvent_1;
	// System.Threading.Tasks.TaskExceptionHolder modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_exceptionsHolder
	TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * ___m_exceptionsHolder_2;
	// System.Threading.CancellationToken System.Threading.Tasks.Task_ContingentProperties::m_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_cancellationToken_3;
	// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> System.Threading.Tasks.Task_ContingentProperties::m_cancellationRegistration
	Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * ___m_cancellationRegistration_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_internalCancellationRequested
	int32_t ___m_internalCancellationRequested_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_completionCountdown
	int32_t ___m_completionCountdown_6;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task_ContingentProperties::m_exceptionalChildren
	List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * ___m_exceptionalChildren_7;

public:
	inline static int32_t get_offset_of_m_capturedContext_0() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_capturedContext_0)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_capturedContext_0() const { return ___m_capturedContext_0; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_capturedContext_0() { return &___m_capturedContext_0; }
	inline void set_m_capturedContext_0(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_capturedContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_capturedContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_completionEvent_1() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_completionEvent_1)); }
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * get_m_completionEvent_1() const { return ___m_completionEvent_1; }
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E ** get_address_of_m_completionEvent_1() { return &___m_completionEvent_1; }
	inline void set_m_completionEvent_1(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * value)
	{
		___m_completionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completionEvent_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_exceptionsHolder_2() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_exceptionsHolder_2)); }
	inline TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * get_m_exceptionsHolder_2() const { return ___m_exceptionsHolder_2; }
	inline TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 ** get_address_of_m_exceptionsHolder_2() { return &___m_exceptionsHolder_2; }
	inline void set_m_exceptionsHolder_2(TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * value)
	{
		___m_exceptionsHolder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionsHolder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_cancellationToken_3() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_cancellationToken_3() const { return ___m_cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_cancellationToken_3() { return &___m_cancellationToken_3; }
	inline void set_m_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_cancellationRegistration_4() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_cancellationRegistration_4)); }
	inline Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * get_m_cancellationRegistration_4() const { return ___m_cancellationRegistration_4; }
	inline Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B ** get_address_of_m_cancellationRegistration_4() { return &___m_cancellationRegistration_4; }
	inline void set_m_cancellationRegistration_4(Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * value)
	{
		___m_cancellationRegistration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cancellationRegistration_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCancellationRequested_5() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_internalCancellationRequested_5)); }
	inline int32_t get_m_internalCancellationRequested_5() const { return ___m_internalCancellationRequested_5; }
	inline int32_t* get_address_of_m_internalCancellationRequested_5() { return &___m_internalCancellationRequested_5; }
	inline void set_m_internalCancellationRequested_5(int32_t value)
	{
		___m_internalCancellationRequested_5 = value;
	}

	inline static int32_t get_offset_of_m_completionCountdown_6() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_completionCountdown_6)); }
	inline int32_t get_m_completionCountdown_6() const { return ___m_completionCountdown_6; }
	inline int32_t* get_address_of_m_completionCountdown_6() { return &___m_completionCountdown_6; }
	inline void set_m_completionCountdown_6(int32_t value)
	{
		___m_completionCountdown_6 = value;
	}

	inline static int32_t get_offset_of_m_exceptionalChildren_7() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_exceptionalChildren_7)); }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * get_m_exceptionalChildren_7() const { return ___m_exceptionalChildren_7; }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB ** get_address_of_m_exceptionalChildren_7() { return &___m_exceptionalChildren_7; }
	inline void set_m_exceptionalChildren_7(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * value)
	{
		___m_exceptionalChildren_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionalChildren_7), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct  XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93  : public Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct  Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___dictionary_0)); }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___current_3)); }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t98F89C24FA7D45751355C66B2E2DE9584D1F5C3D  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct  TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct  TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Object>
struct  TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct  TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct  Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284, ___m_result_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_result_22() const { return ___m_result_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_22)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  NativeArray_1_t901047647D1B0577009EA387273335B841552234 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  TrackingSubsystem_2_t940E220E7BF619735AEB4307D08C2B732FD50F17  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct  TrackingSubsystem_2_tF79BBAD8B9196143398CDA4B5824261B5546A012  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct  TrackingSubsystem_2_t996FDA9D3A93102756CBF57E7B9AA9502F185EBB  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct  TrackingSubsystem_2_t1B8616CDEBD2E6336B863790A17429FDAE52BE94  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct  TrackingSubsystem_2_tEF849A9635045F125E491A8548A9C02EDF83A21B  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  TrackingSubsystem_2_tE5DCDA2AE4A2A8726923CF4B64E99A303DF95F36  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  TrackingSubsystem_2_t5E87AF02E595B31BFDED1907F5C8E878D4F6376D  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct  TrackingSubsystem_2_t08B895827D14FBF9A65858E5EE23626AF78A0EE8  : public XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Int32>
struct  Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct  Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Threading.Tasks.VoidTaskResult>
struct  Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Threading.Tasks.VoidTaskResult>
struct  Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct  Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct  Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct  Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct  Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.MonoProperty_StaticGetter`1<System.Object>
struct  StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct  UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<System.Object>
struct  Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 
{
public:
	// System.Collections.Generic.Dictionary`2_Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator::m_Enumerator
	Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07, ___m_Enumerator_0)); }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tBDE39976A6EDE25239B2A4BB32B174C88FEE9921  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Enumerator_0))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Added_1)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Updated_2)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Added_1)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Updated_2)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t901047647D1B0577009EA387273335B841552234  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t901047647D1B0577009EA387273335B841552234  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Added_1)); }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t901047647D1B0577009EA387273335B841552234  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Updated_2)); }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t901047647D1B0577009EA387273335B841552234  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct  TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Added_1)); }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Updated_2)); }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct  TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Added_1)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Updated_2)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Added_1)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Updated_2)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Added_1)); }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Updated_2)); }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Added_1)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Updated_2)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.Management.XRGeneralSettings
struct  XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct  XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct  XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}
};

struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields
{
public:
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::s_ActiveLoader
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___s_ActiveLoader_9;

public:
	inline static int32_t get_offset_of_s_ActiveLoader_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields, ___s_ActiveLoader_9)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_s_ActiveLoader_9() const { return ___s_ActiveLoader_9; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_s_ActiveLoader_9() { return &___s_ActiveLoader_9; }
	inline void set_s_ActiveLoader_9(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___s_ActiveLoader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActiveLoader_9), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct  SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::m_CleanupSubsystemOnDestroy
	bool ___m_CleanupSubsystemOnDestroy_5;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CleanupSubsystemOnDestroy_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC, ___m_CleanupSubsystemOnDestroy_5)); }
	inline bool get_m_CleanupSubsystemOnDestroy_5() const { return ___m_CleanupSubsystemOnDestroy_5; }
	inline bool* get_address_of_m_CleanupSubsystemOnDestroy_5() { return &___m_CleanupSubsystemOnDestroy_5; }
	inline void set_m_CleanupSubsystemOnDestroy_5(bool value)
	{
		___m_CleanupSubsystemOnDestroy_5 = value;
	}
};

struct SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemDescriptors_6;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemInstances
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemInstances_7;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields, ___s_SubsystemDescriptors_6)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemDescriptors_6() const { return ___s_SubsystemDescriptors_6; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemDescriptors_6() { return &___s_SubsystemDescriptors_6; }
	inline void set_s_SubsystemDescriptors_6(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_7() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields, ___s_SubsystemInstances_7)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemInstances_7() const { return ___s_SubsystemInstances_7; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemInstances_7() { return &___s_SubsystemInstances_7; }
	inline void set_s_SubsystemInstances_7(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemInstances_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Concurrent.ConcurrentDictionary`2_Node<System.Object,System.Object>[]
struct NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * m_Items[1];

public:
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t96E92EA297C14C2CA6CB776B34A4953C6EE32EF9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared_inline (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared_inline (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared_inline (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared_inline (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE_gshared (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E_gshared (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD_gshared (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534_gshared (ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_added_m5D8DDA57FC99B1791E1E685A1307524DF46734E3_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_updated_mF311940D2CD71DEE58C73FD15EB4B479AB24FBA5_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DE03ED3BBD30D8C75CCED949A87B8DE4162B2_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m4BF1449E72C285F5574323A0A073599470C2013A_gshared (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_gshared (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_added_mE29D4663DA3DB7CB058D0F1DE5B93F3D4DB2D624_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_updated_mD0E5F69927C728B1138EE8E5F85FFF5734A7FC57_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m1D97F8933EC726E914D9E9EDA60362239BC853D5_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_gshared (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_added_m5F510AA3B95A7EB6986D1CBD26CB3D9125E63B0C_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_updated_m46BE9C4D82C22D932C8DC356F7ABE845B9F0E6FE_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m287C96B382C552FE4158C67FB1B8E29C60B0C506_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m40A5F82AF21A439D270A7C47B3EF7ED71716FC46_gshared (NativeArray_1_t901047647D1B0577009EA387273335B841552234 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m10100365EBAEAE4EA0300C58DEB802F249C90B6A_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m2DEF8770C183851CFC7BFC15B73E95D148FE2F44_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3_gshared (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC_gshared (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mEBA03313D9F609CBFED6C642548C871B5B379C9E_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_mBD290DC76278209A657F6FDBBCE2D14B2E4BD320_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD_gshared (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_mD119E1CA7E2DF0EF892FC325BA2FB8991D001898_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mF25DBAC3C0D01EF317AB076B280A9A9146D3405F_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489_gshared (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_m1C78A908CC8E8DE4C512F434D31D822E9C8BBAD2_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m8302E916BBCD4888C3A0536084B94BE17D378DDC_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23_gshared (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA7B2ABFB9289BBCB62B1C25572AB953B60514CED_gshared (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// UnityEngine.Subsystem UnityEngine.Internal_SubsystemInstances::Internal_FindStandaloneSubsystemInstanceGivenDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * Internal_SubsystemInstances_Internal_FindStandaloneSubsystemInstanceGivenDescriptor_m4EF0BEAE3FB24C55FABAF2C1C78C080134D9ADC0 (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * ___descriptor0, const RuntimeMethod* method);
// System.Type UnityEngine.SubsystemDescriptor::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptor_get_subsystemImplementationType_mD252968F35A3D60FDC357C2DCA6CA0A0B71C84C0_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Internal_SubsystemInstances::Internal_AddStandaloneSubsystem(UnityEngine.Subsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_mA3A3649CDB32AA15C9B5E8AEB4B53C96E6DF19FE (Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * ___inst0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor__ctor_m6BE761B6ADD71B136BCECB0F54B82801B7222114 (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String UnityEngine.SubsystemDescriptor::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mC3D7972588D4B57F906A06CEE54A61B55D1306DB_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_Destroy_mDAEF3C8FEE45DEAB90452E998E249CAEAB32A329 (Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem__ctor_mC6AFF077E6D2BDFB272AFC1EA25D1375EC64EF77 (Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_inline (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, const RuntimeMethod*))TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::OnCompletedInternal(System.Threading.Tasks.Task,System.Action,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation1, bool ___continueOnCapturedContext2, bool ___flowExecutionContext3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_gshared)(__this, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::ValidateEnd(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_inline (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_gshared)(__this, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_inline (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, const RuntimeMethod*))TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2 (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_gshared)(__this, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
inline void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_inline (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, const RuntimeMethod*))TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared_inline)(__this, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::UnsafeOnCompleted(System.Action)
inline void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_gshared)(__this, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::GetResult()
inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, const RuntimeMethod* method)
{
	return ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskFactory::CheckMultiTaskContinuationOptions(System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A (int32_t ___continuationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::CheckCreationOptions(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65 (int32_t ___creationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor(System.Boolean,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___canceled0, int32_t ___creationOptions1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5 (int32_t ___creationOptions0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::PossiblyCaptureContext(System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, int32_t* ___stackMark0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Delegate_t * ___action0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::AtomicStateUpdate(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, int32_t ___newBits0, int32_t ___illegalBits1, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794 (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task/ContingentProperties::SetCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591 (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::FinishStageThree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsWaitNotificationEnabledOrNotRanToCompletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::InternalWait(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, int32_t ___millisecondsTimeout0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::NotifyDebuggerOfWaitCompletionIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsRanToCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::ThrowIfExceptional(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___includeTaskCanceledExceptions0, const RuntimeMethod* method);
// System.Threading.Tasks.Task/ContingentProperties System.Threading.Tasks.Task::EnsureContingentPropertiesInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___needsProtection0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::AddException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::Finish(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___bUserDelegateExecuted0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RecordInternalCancellationRequest(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::CancellationCleanupLogic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D *, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>,System.Boolean)
inline void ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534 (ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, bool ___continueOnCapturedContext1, const RuntimeMethod* method)
{
	((  void (*) (ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3 *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534_gshared)(__this, ___task0, ___continueOnCapturedContext1, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_added_m5D8DDA57FC99B1791E1E685A1307524DF46734E3_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  (*) (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *, const RuntimeMethod*))TrackableChanges_1_get_added_m5D8DDA57FC99B1791E1E685A1307524DF46734E3_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_updated_mF311940D2CD71DEE58C73FD15EB4B479AB24FBA5_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  (*) (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mF311940D2CD71DEE58C73FD15EB4B479AB24FBA5_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DE03ED3BBD30D8C75CCED949A87B8DE4162B2_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mCF5DE03ED3BBD30D8C75CCED949A87B8DE4162B2_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void NativeArray_1_Dispose_m4BF1449E72C285F5574323A0A073599470C2013A (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *, const RuntimeMethod*))NativeArray_1_Dispose_m4BF1449E72C285F5574323A0A073599470C2013A_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *, const RuntimeMethod*))NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215 (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_added()
inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_added_mE29D4663DA3DB7CB058D0F1DE5B93F3D4DB2D624_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  (*) (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *, const RuntimeMethod*))TrackableChanges_1_get_added_mE29D4663DA3DB7CB058D0F1DE5B93F3D4DB2D624_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_updated()
inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_updated_mD0E5F69927C728B1138EE8E5F85FFF5734A7FC57_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  (*) (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *, const RuntimeMethod*))TrackableChanges_1_get_updated_mD0E5F69927C728B1138EE8E5F85FFF5734A7FC57_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m1D97F8933EC726E914D9E9EDA60362239BC853D5_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *, const RuntimeMethod*))TrackableChanges_1_get_removed_m1D97F8933EC726E914D9E9EDA60362239BC853D5_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
inline void NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *, const RuntimeMethod*))NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
inline void TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451 (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *, const RuntimeMethod*))TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_added_m5F510AA3B95A7EB6986D1CBD26CB3D9125E63B0C_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t901047647D1B0577009EA387273335B841552234  (*) (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *, const RuntimeMethod*))TrackableChanges_1_get_added_m5F510AA3B95A7EB6986D1CBD26CB3D9125E63B0C_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_updated_m46BE9C4D82C22D932C8DC356F7ABE845B9F0E6FE_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t901047647D1B0577009EA387273335B841552234  (*) (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *, const RuntimeMethod*))TrackableChanges_1_get_updated_m46BE9C4D82C22D932C8DC356F7ABE845B9F0E6FE_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m287C96B382C552FE4158C67FB1B8E29C60B0C506_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *, const RuntimeMethod*))TrackableChanges_1_get_removed_m287C96B382C552FE4158C67FB1B8E29C60B0C506_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
inline void NativeArray_1_Dispose_m40A5F82AF21A439D270A7C47B3EF7ED71716FC46 (NativeArray_1_t901047647D1B0577009EA387273335B841552234 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t901047647D1B0577009EA387273335B841552234 *, const RuntimeMethod*))NativeArray_1_Dispose_m40A5F82AF21A439D270A7C47B3EF7ED71716FC46_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
inline void TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28 (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *, const RuntimeMethod*))TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m10100365EBAEAE4EA0300C58DEB802F249C90B6A_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_added_m10100365EBAEAE4EA0300C58DEB802F249C90B6A_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m2DEF8770C183851CFC7BFC15B73E95D148FE2F44_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m2DEF8770C183851CFC7BFC15B73E95D148FE2F44_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3 (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *, const RuntimeMethod*))NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
inline void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
inline void NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *, const RuntimeMethod*))NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
inline void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9 (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *, const RuntimeMethod*))TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mEBA03313D9F609CBFED6C642548C871B5B379C9E_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_added_mEBA03313D9F609CBFED6C642548C871B5B379C9E_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_mBD290DC76278209A657F6FDBBCE2D14B2E4BD320_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mBD290DC76278209A657F6FDBBCE2D14B2E4BD320_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *, const RuntimeMethod*))NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2 (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_mD119E1CA7E2DF0EF892FC325BA2FB8991D001898_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_added_mD119E1CA7E2DF0EF892FC325BA2FB8991D001898_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mF25DBAC3C0D01EF317AB076B280A9A9146D3405F_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mF25DBAC3C0D01EF317AB076B280A9A9146D3405F_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489 (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *, const RuntimeMethod*))NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7 (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_m1C78A908CC8E8DE4C512F434D31D822E9C8BBAD2_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_added_m1C78A908CC8E8DE4C512F434D31D822E9C8BBAD2_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m8302E916BBCD4888C3A0536084B94BE17D378DDC_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m8302E916BBCD4888C3A0536084B94BE17D378DDC_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23 (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *, const RuntimeMethod*))NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051 (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void Enumerator__ctor_mA7B2ABFB9289BBCB62B1C25572AB953B60514CED (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07 *, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, const RuntimeMethod*))Enumerator__ctor_mA7B2ABFB9289BBCB62B1C25572AB953B60514CED_gshared)(__this, ___trackables0, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
inline Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
inline void TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	((  void (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, const RuntimeMethod*))TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_gshared)(__this, ___trackables0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
inline int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161 (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, const RuntimeMethod*))TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m6757CFA9B5CC91705866ABDD9E48681DAB1C71D9 (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
inline RuntimeObject * TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20 (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , const RuntimeMethod*))TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_gshared)(__this, ___trackableId0, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetHashCode()
inline int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, const RuntimeMethod*))TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
inline bool TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008 (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 , const RuntimeMethod*))TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(System.Object)
inline bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03 (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, RuntimeObject *, const RuntimeMethod*))TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
inline bool TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581 (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , RuntimeObject **, const RuntimeMethod*))TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_gshared)(__this, ___trackableId0, ___trackable1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Tuple::CombineHashCodes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m34B16565FCB93CC63DAF544CC55CD4459A7435AB (int32_t ___h10, int32_t ___h21, int32_t ___h32, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * ___call0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36 (Type_t * ___objectType0, String_t* ___functionName1, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7 (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0 (RuntimeArray * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.MonoProperty_StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticGetter_1__ctor_mCB9F6199681B0664F67E085BB97DAE5DB341AC30_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// R System.Reflection.MonoProperty_StaticGetter`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_Invoke_m08F70CE702870040A78BB0E5F863F253ECEBC8D4_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Reflection.MonoProperty_StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StaticGetter_1_BeginInvoke_m7C19626A86BEC69169C4BB781F40448AFC036D04_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// R System.Reflection.MonoProperty_StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StaticGetter_1_EndInvoke_m4BCFC92037FF0D7ED5747DBE3C5B0F8A5CB38F44_gshared (StaticGetter_1_t34703320355FB45822699F7FF6C0BC577E0DDA01 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TSubsystem UnityEngine.SubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemDescriptor_1_Create_m537FEAC87E414397DBE61201BEC410A4D65EFC19_gshared (SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemDescriptor_1_Create_m537FEAC87E414397DBE61201BEC410A4D65EFC19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tA72C27A074ABEA48D0E813D2247349B55D160395_il2cpp_TypeInfo_var);
		Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * L_0 = Internal_SubsystemInstances_Internal_FindStandaloneSubsystemInstanceGivenDescriptor_m4EF0BEAE3FB24C55FABAF2C1C78C080134D9ADC0((SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		RuntimeObject * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		V_2 = (RuntimeObject *)L_3;
		goto IL_0057;
	}

IL_0024:
	{
		NullCheck((SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 *)__this);
		Type_t * L_4 = SubsystemDescriptor_get_subsystemImplementationType_mD252968F35A3D60FDC357C2DCA6CA0A0B71C84C0_inline((SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_5 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295((Type_t *)L_4, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		RuntimeObject * L_6 = V_3;
		NullCheck(L_6);
		((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_6)->set_m_subsystemDescriptor_0(__this);
		RuntimeObject * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tA72C27A074ABEA48D0E813D2247349B55D160395_il2cpp_TypeInfo_var);
		Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_mA3A3649CDB32AA15C9B5E8AEB4B53C96E6DF19FE((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8 = V_3;
		V_2 = (RuntimeObject *)L_8;
		goto IL_0057;
	}

IL_0057:
	{
		RuntimeObject * L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m8C6A21CD0D0941472B4E6A7D64BA38ACED08BE83_gshared (SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 *)__this);
		SubsystemDescriptor__ctor_m6BE761B6ADD71B136BCECB0F54B82801B7222114((SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m0E54FCECC3113D65384E5236C37C89C0D68AE72B_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::set_subsystem(TSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_set_subsystem_m6E732616C41E681A685AE49D89A7D410676E9B2B_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CsubsystemU3Ek__BackingField_4(L_0);
		return;
	}
}
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_descriptor_mD192235FC56BF8ACEAE5AD56C5E58EBBB08F95F6_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// get { return (subsystem == null) ? null : subsystem.SubsystemDescriptor; }
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 *)L_1);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_2;
	}

IL_001e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_CreateSubsystem_m8F7730493D8777A7CD4CB26E155AF86D8774BB76_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemLifecycleManager_2_CreateSubsystem_m8F7730493D8777A7CD4CB26E155AF86D8774BB76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// SubsystemManager.GetSubsystemDescriptors(s_SubsystemDescriptors);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// if (s_SubsystemDescriptors.Count > 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1);
		int32_t L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// var descriptor = s_SubsystemDescriptors[0];
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_4;
		// if (s_SubsystemDescriptors.Count > 1)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemDescriptors_6();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		int32_t L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogWarningFormat("Multiple {0} found. Using {1}",
		//     typeof(TSubsystem).Name,
		//     descriptor.id);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_7;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_9, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_8;
		RuntimeObject * L_13 = V_0;
		NullCheck((SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 *)L_13);
		String_t* L_14 = SubsystemDescriptor_get_id_mC3D7972588D4B57F906A06CEE54A61B55D1306DB_inline((SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 *)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774((String_t*)_stringLiteral85C45295DCFC26EE88F650ADE22BFF7E053E5658, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// return descriptor.Create();
		RuntimeObject * L_15 = V_0;
		NullCheck((SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A *)L_15);
		RuntimeObject * L_16 = ((  RuntimeObject * (*) (SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((SubsystemDescriptor_1_tEA7E5F11DBF319514A9F77C9765671DF1A3C8A7A *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return L_16;
	}

IL_006c:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_1;
		return L_17;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystemIfNecessary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_CreateSubsystemIfNecessary_mF7F7813B9328B5B22A4D49682FF24ABA31042FB3_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	{
		// if (subsystem == null)
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// subsystem = GetActiveSubsystemInstance();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// if (subsystem != null)
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// m_CleanupSubsystemOnDestroy = false;
		__this->set_m_CleanupSubsystemOnDestroy_5((bool)0);
	}

IL_002d:
	{
		// if (subsystem == null)
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		// subsystem = CreateSubsystem();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(4 /* TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::CreateSubsystem() */, (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
	}

IL_0046:
	{
		// }
		return;
	}
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::GetActiveSubsystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m9CE58A9E0AEBEC179789A5DC6533A8ABA0376338_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemLifecycleManager_2_GetActiveSubsystemInstance_m9CE58A9E0AEBEC179789A5DC6533A8ABA0376338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * V_1 = NULL;
	{
		// TSubsystem activeSubsystem = null;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		// if (XRGeneralSettings.Instance != null && XRGeneralSettings.Instance.Manager != null)
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_2 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 *)L_2);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_3 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 *)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// XRLoader loader = XRGeneralSettings.Instance.Manager.activeLoader;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_5 = XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline(/*hidden argument*/NULL);
		NullCheck((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 *)L_5);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_6 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 *)L_5, /*hidden argument*/NULL);
		NullCheck((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)L_6);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_7 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)L_6, /*hidden argument*/NULL);
		V_1 = (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)L_7;
		// if (loader != null)
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// activeSubsystem = loader.GetLoadedSubsystem<TSubsystem>();
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_10 = V_1;
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)L_10);
		RuntimeObject * L_11 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)L_10);
		V_0 = (RuntimeObject *)L_11;
	}

IL_0047:
	{
		// if (activeSubsystem == null)
		RuntimeObject * L_12 = V_0;
		if (L_12)
		{
			goto IL_0072;
		}
	}
	{
		// SubsystemManager.GetInstances(s_SubsystemInstances);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13 = ((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemInstances_7();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// if (s_SubsystemInstances.Count > 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = ((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemInstances_7();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14);
		int32_t L_15 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		// activeSubsystem = s_SubsystemInstances[0];
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_16 = ((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)))->get_s_SubsystemInstances_7();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_16);
		RuntimeObject * L_17 = ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_16, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		V_0 = (RuntimeObject *)L_17;
	}

IL_0072:
	{
		// return activeSubsystem;
		RuntimeObject * L_18 = V_0;
		return L_18;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnEnable_mF5714D7CA6662776729D922E4641D366C65F6022_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	{
		// CreateSubsystemIfNecessary();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		// if (subsystem != null)
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// OnBeforeStart();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart() */, (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		// if (enabled)
		NullCheck((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)__this);
		bool L_1 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// subsystem.Start();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Subsystem::Start() */, (Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_2);
		// OnAfterStart();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart() */, (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDisable_mF802CEBA9C22C3F4A1015DBE8A1E709FAC460627_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	{
		// if (subsystem != null)
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// subsystem.Stop();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_1);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnDestroy_mB72A291D0EBEF18A11AACBB6A84CD10AE49FBFA6_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// if (m_CleanupSubsystemOnDestroy && subsystem != null)
		bool L_0 = (bool)__this->get_m_CleanupSubsystemOnDestroy_5();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// subsystem.Destroy();
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_2);
		Subsystem_Destroy_mDAEF3C8FEE45DEAB90452E998E249CAEAB32A329((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// subsystem = null;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		NullCheck((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this);
		((  void (*) (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC *)__this, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnBeforeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnBeforeStart_mF2ECED5EA18D3D2A42BF69ED86873A25360E70D3_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::OnAfterStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_OnAfterStart_mF74F579462A47BD8C0E5867A47710FA935C7322A_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_mD06A03F283D8A04665FF10C893FB555C8A22AB25_gshared (SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC * __this, const RuntimeMethod* method)
{
	{
		// bool m_CleanupSubsystemOnDestroy = true;
		__this->set_m_CleanupSubsystemOnDestroy_5((bool)1);
		NullCheck((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__cctor_m13F39DE99EDE9D56E9F7FCD04D19D4ADC261168B_gshared (const RuntimeMethod* method)
{
	{
		// static List<TSubsystemDescriptor> s_SubsystemDescriptors =
		//     new List<TSubsystemDescriptor>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->set_s_SubsystemDescriptors_6(L_0);
		// static List<TSubsystem> s_SubsystemInstances =
		//     new List<TSubsystem>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		((SubsystemLifecycleManager_2_t80CD2F1FDB6631A1573C0A950F11EE7C8CCBFFEC_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))->set_s_SubsystemInstances_7(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TSubsystemDescriptor UnityEngine.Subsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Subsystem_1_get_SubsystemDescriptor_mEF51EBB332EE88FAB89BD82C095D27A700228379_gshared (Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)__this)->get_m_subsystemDescriptor_0();
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_mAEC8690C5CD9191AD10190DAB32C106D3A33CBF7_gshared (Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)__this);
		Subsystem__ctor_mC6AFF077E6D2BDFB272AFC1EA25D1375EC64EF77((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2_Tables<System.Object,System.Object>::.ctor(System.Collections.Concurrent.ConcurrentDictionary`2_Node<TKey,TValue>[],System.Object[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables__ctor_mB1DBA1BD5FD558147563EA6346B85F4C35E2F2E1_gshared (Tables_tC9F0951BCC31929B132D56E8B72AF68882E7F2EA * __this, NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* ___buckets0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___locks1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___countPerLock2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		NodeU5BU5D_t44E9F769F519A8B34D3471A563F0066F1C82409A* L_0 = ___buckets0;
		__this->set__buckets_0(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___locks1;
		__this->set__locks_1(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___countPerLock2;
		il2cpp_codegen_memory_barrier();
		__this->set__countPerLock_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_AdjustorThunk (RuntimeObject * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *>(__this + _offset);
	TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_mA5BC021D0DCA2E675EA66487D50D4E381999493D(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_1 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		NullCheck((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_1);
		bool L_2 = ((  bool (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *>(__this + _offset);
	return TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_AdjustorThunk (RuntimeObject * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *>(__this + _offset);
	TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_m71462B0DD179774D324E17CD2FBB194FC0882F53(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_1 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this->get_m_task_0();
		NullCheck((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_1);
		int32_t L_2 = ((  int32_t (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *>(__this + _offset);
	return TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_AdjustorThunk (RuntimeObject * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *>(__this + _offset);
	TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_m162A27DB052A25B3E41C2A45D27360F46A6B29B2(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_1 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_1);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *>(__this + _offset);
	return TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.Tasks.Task`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_AdjustorThunk (RuntimeObject * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *>(__this + _offset);
	TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this->get_m_task_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___continuation0;
		TaskAwaiter_OnCompletedInternal_m6B7D35FFFF726F689EABF9A513DF885B84CF790D((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E_AdjustorThunk (RuntimeObject * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *>(__this + _offset);
	TaskAwaiter_1_UnsafeOnCompleted_m38C52B39B87B1F2C13E0D01ADDD85820861B227E(_thisAdjusted, ___continuation0, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_gshared (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this->get_m_task_0();
		TaskAwaiter_ValidateEnd_m8C8532E03B6F655525AB87D420CACE753DC1CD3B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_0, /*hidden argument*/NULL);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_1 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this->get_m_task_0();
		NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_1);
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_2 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * _thisAdjusted = reinterpret_cast<TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC *>(__this + _offset);
	return TaskAwaiter_1_GetResult_m92C9F1FC0E92C4E551807E54637008293B93D5EB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m94CDE55BE968D75ADDD16A394DA59FB3CC71586E_gshared (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *)__this);
		((  void (*) (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Boolean>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_mB54A6D08E03D5EDE2741C33FBB1DBF3A15A4BC25_gshared (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m95A30E31077CC563964CFDDDB4229382E8E597A9_gshared (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *)__this);
		((  void (*) (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Int32>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m99CF2AD2F6A6891B2F1E1D6B5064B6BC074BDA4E_gshared (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m0BD45C96838F379D431730A84606A7D2560AD844_gshared (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *)__this);
		((  void (*) (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Object>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_mA5825E7F57AFB09B7BEB570FCC074AD27E0A608B_gshared (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_m048C61580C2DFED01156A742917D59499B45B9C1_gshared (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * __this, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *)__this);
		((  void (*) (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (int32_t)0, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_1__ctor_mEC1A07D07DC810393CDE14D77F3AE47388DF99E4_gshared (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, int32_t ___creationOptions1, int32_t ___continuationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___continuationOptions2;
		TaskFactory_CheckMultiTaskContinuationOptions_m592473AB47584DE6B8C032335E63798E2737D40A((int32_t)L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___creationOptions1;
		TaskFactory_CheckCreationOptions_mB5BA78C895925094C20D93F462BB06FFE47AFB65((int32_t)L_1, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___cancellationToken0;
		__this->set_m_defaultCancellationToken_0(L_2);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_3 = ___scheduler3;
		__this->set_m_defaultScheduler_1(L_3);
		int32_t L_4 = ___creationOptions1;
		__this->set_m_defaultCreationOptions_2(L_4);
		int32_t L_5 = ___continuationOptions2;
		__this->set_m_defaultContinuationOptions_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m37A2A89D16FE127FD4C1125B71D30EE0AD5F7547_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m37A2A89D16FE127FD4C1125B71D30EE0AD5F7547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4147FD562A52E37964BFF472DB939744FBA7DA29_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m4147FD562A52E37964BFF472DB939744FBA7DA29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		bool L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mEB79C972D350C5A7B7FF71C2846403554423D1FC_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___canceled0, bool ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mEB79C972D350C5A7B7FF71C2846403554423D1FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		bool L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mC02DD409D1C1B359B32C6B4F4C06F690D8CFCABC_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mC02DD409D1C1B359B32C6B4F4C06F690D8CFCABC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		NullCheck((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this);
		((  void (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Task_1__ctor_m123E20CD4E3CC51B5AD2010E3BEB0E08502B1E02_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_mFBE3512457036F312EF672E0F3A7FEAE3E22EE74_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		bool L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_5 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_5;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		NullCheck((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7);
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7, /*hidden argument*/NULL);
	}

IL_004f:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_get_Result_mEC1B2C0D9A04A24259F4E5F7A9191C2A83E43803_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = (bool)__this->get_m_result_22();
		return L_1;
	}

IL_000f:
	{
		NullCheck((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this);
		bool L_2 = ((  bool (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Boolean>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_get_ResultOnSuccess_mCCDAA69136B5787F8E2E833454430CB7D14C5C22_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_result_22();
		return L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Boolean>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_GetResultCore_m08244083EA9926A7905D56F2745686632B23DB4B_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_2 = ___waitCompletionNotification0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_3 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		bool L_4 = (bool)__this->get_m_result_22();
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m47EF41EFE44B83B833292961D11E92FC9F9AD808_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_1 = ___exceptionObject0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mC7E4F953E4B13FEBAED3EECDD5FC10889D146013_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		NullCheck((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this);
		bool L_1 = ((  bool (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mC924977D82B8429B45E4FC13002C766A44CE9E5A_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m81477762E11D4BEB32871A862072E74ACFB7753D_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * V_0 = NULL;
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)((Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = V_0;
		NullCheck((Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)L_2);
		bool L_3 = ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_inline((&L_0), (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  Task_1_ConfigureAwait_mEEE46CCCCC629B162C32D55D75B3048E93FE674B_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_t601E7B1D64EF5FDD0E9FE254E0C9DB5B9CA7F59D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_m00AE49530694432761D2AC5849CAF68F0BD49AEE((&L_1), (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_mA0D0A7BB870B989DF1F67D02C4BE2EA3D45AEF07_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * L_0 = (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D * L_1 = ((U3CU3Ec_t8F7CC4F3F63350A4DCEE8593B96F697EB6D4A86D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * L_2 = (Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m6A14EF254702334006629FCB5647C803860A7CDD_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m6A14EF254702334006629FCB5647C803860A7CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB341E7553AAAEB403760159C837759AC0C7B2F20_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mB341E7553AAAEB403760159C837759AC0C7B2F20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m4614FE775E152B2268F056D9A0504CD31B935DEA_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___canceled0, int32_t ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m4614FE775E152B2268F056D9A0504CD31B935DEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mCCDDF351A22140292DE88EC77D8C644A647AE619_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mCCDDF351A22140292DE88EC77D8C644A647AE619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		NullCheck((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this);
		((  void (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Task_1__ctor_m52F8C4F663DE685AD4BAA9EE6B79D0996146FB91_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m60A26E300A1D0DE739D50DEA22A44B96661DA6C0_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_5 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_5;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		NullCheck((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7);
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7, /*hidden argument*/NULL);
	}

IL_004f:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Int32>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_Result_m71D1165F8F30E8EDD34A98DBC72B55B15825D005_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->get_m_result_22();
		return L_1;
	}

IL_000f:
	{
		NullCheck((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this);
		int32_t L_2 = ((  int32_t (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Int32>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_ResultOnSuccess_mFFF53075109EDE36DFAB103F29EC073F4A2E5D2D_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_result_22();
		return L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Int32>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_GetResultCore_m6CE9E4211999FFD017F082345D5E28CDFB8FD86F_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_2 = ___waitCompletionNotification0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_3 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		int32_t L_4 = (int32_t)__this->get_m_result_22();
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m3DFC28BCD56E7EE8BDB841F1A97EF4BE8E156A02_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_1 = ___exceptionObject0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mE3C94396026524C6AC39F93E0E765128F15510A2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		NullCheck((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this);
		bool L_1 = ((  bool (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mEF197EE337A7CBE2EECE69AA1ECA0231718F1EB9_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_mDE4EBA1F49EF69FC648243A66A98334582BDE4AD_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * V_0 = NULL;
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)((Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * L_2 = V_0;
		NullCheck((Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)L_2);
		int32_t L_3 = ((  int32_t (*) (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_6);
		int32_t L_8 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_inline((&L_0), (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_m93EA35BCE92CF8F40FACEED76DC3E9669191B78E((&L_1), (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_m0F4455B017035D371420B1C9B2AA34D5EF3F4D55_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * L_0 = (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E * L_1 = ((U3CU3Ec_tBFD92240FF5C3A7C088E167754EDA4E55E636C3E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * L_2 = (Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m0E154B54952313C68BE249DC65272D106C202E8C_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m0E154B54952313C68BE249DC65272D106C202E8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mEB7932B4A44919389589CACDC1D443AB2D1681FB_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mEB7932B4A44919389589CACDC1D443AB2D1681FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mFC380BDDF1AF18F401DBE606D16B29C5A7170D8B_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___canceled0, RuntimeObject * ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mFC380BDDF1AF18F401DBE606D16B29C5A7170D8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mDDC922A10C49DB4478ADAB2E20B79AA6C2C105D3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mDDC922A10C49DB4478ADAB2E20B79AA6C2C105D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this);
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Task_1__ctor_m45DA83B8321A999F8E5368833CDD148D95AA141D_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m1050FBF178389A5D03D30C4C53B7E3E097A56B42_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject * L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_5 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_5;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		NullCheck((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7);
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7, /*hidden argument*/NULL);
	}

IL_004f:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_result_22();
		return L_1;
	}

IL_000f:
	{
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_ResultOnSuccess_m46A8F0AC50B96BA13F1F8C3B88415350C5DF66B7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_result_22();
		return L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Object>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_GetResultCore_m4631F08B8681F2A2DE14C25BEB1801B377447B25_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_2 = ___waitCompletionNotification0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_3 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_result_22();
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_m2300A530586907923A4332A10CA7976E7262695C_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_1 = ___exceptionObject0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_m3BB36CD1F80D11A98FDA16B2598337DEFA4E9BBA_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this);
		bool L_1 = ((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mA627A702453DE3F952EEA1B68CF604534EDB491F_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m2FE8556EDE2265EA5F8923DE88A5995F75A19221_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * V_0 = NULL;
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_2 = V_0;
		NullCheck((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_6);
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_inline((&L_0), (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_mBC64F50B1AF5434E6D60CEC0D77A57E28E99C0AD((&L_1), (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_m50823F27341624B67A0AA0E58F1DF03132D5463B_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * L_0 = (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950 * L_1 = ((U3CU3Ec_t80130F43AA0F2754A17EECFF27996A0AC7CDF950_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * L_2 = (Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mF1E8FBF8D067B862FF2E96557394CC8CB7EB334F((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m7EC33EF34F64114A8D152BBAC30B8863F55D8E57_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m7EC33EF34F64114A8D152BBAC30B8863F55D8E57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, /*hidden argument*/NULL);
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_1 = ___result0;
		__this->set_m_result_22(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Boolean,TResult,System.Threading.Tasks.TaskCreationOptions,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m54069BFDCD1C670A3713A298C56D7F1AF86C5316_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, bool ___canceled0, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result1, int32_t ___creationOptions2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ct3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m54069BFDCD1C670A3713A298C56D7F1AF86C5316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___canceled0;
		int32_t L_1 = ___creationOptions2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = ___ct3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_mB8A69B1CDE84773711A1F727E8F12A771D005F1A((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)L_0, (int32_t)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, /*hidden argument*/NULL);
		bool L_3 = ___canceled0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_4 = ___result1;
		__this->set_m_result_22(L_4);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_1__ctor_mA972BE2F2787EBC865852B68C10F851828096F93_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_mA972BE2F2787EBC865852B68C10F851828096F93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * L_0 = ___function0;
		RuntimeObject * L_1 = ___state1;
		int32_t L_2 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_2, /*hidden argument*/NULL);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this);
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, Delegate_t *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (int32_t)1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_PossiblyCaptureContext_m027EA18025BF0A326DA9464B122B42843F7CB068((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor(System.Delegate,System.Object,System.Threading.Tasks.Task,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, Delegate_t * ___valueSelector0, RuntimeObject * ___state1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___parent2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken3, int32_t ___creationOptions4, int32_t ___internalOptions5, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t * L_0 = ___valueSelector0;
		RuntimeObject * L_1 = ___state1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___parent2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken3;
		int32_t L_4 = ___creationOptions4;
		int32_t L_5 = ___internalOptions5;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler6;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task__ctor_m3D10764ADAA8079A58C62BE79261EFA5230D2220((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Delegate_t *)L_0, (RuntimeObject *)L_1, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, (int32_t)L_4, (int32_t)L_5, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___internalOptions5;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617((String_t*)_stringLiteral727134E8876CCD579799D299CAC3AC5EBD50C47C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, (String_t*)_stringLiteral57C7DAC31FE47C45D5BF06DA958542F4BFAFD003, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Task_1__ctor_m3DF11CEF04129066D80E213A02C6E1A16EF2770F_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result0, const RuntimeMethod* method)
{
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * V_0 = NULL;
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_1 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_2 = ___result0;
		__this->set_m_result_22(L_2);
		int32_t* L_3 = (int32_t*)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_address_of_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		int32_t L_4 = (int32_t)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_3, (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)16777216))), /*hidden argument*/NULL);
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_5 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_contingentProperties_15();
		il2cpp_codegen_memory_barrier();
		V_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_5;
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_7 = V_0;
		NullCheck((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7);
		ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591((ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)L_7, /*hidden argument*/NULL);
	}

IL_004f:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_FinishStageThree_m69858B3BDD06352B2A0B0A25F399D52DE199E226((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0057:
	{
		return (bool)0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  Task_1_get_Result_m385E10E855FCEE323B2D95C5C2FE56FB20D26122_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_1 = (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )__this->get_m_result_22();
		return L_1;
	}

IL_000f:
	{
		NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this);
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_2 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_2;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::get_ResultOnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  Task_1_get_ResultOnSuccess_m559E89F4C6E683A352F2443533B48AF932CC0E5D_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_0 = (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )__this->get_m_result_22();
		return L_0;
	}
}
// TResult System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::GetResultCore(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  Task_1_GetResultCore_m60248E398FA3FFC22F6284CE25F154B658E55298_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, bool ___waitCompletionNotification0, const RuntimeMethod* method)
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_InternalWait_mE57EF4D36E52156CE56428699F713D69BFF2C4B0((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)(-1), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		bool L_2 = ___waitCompletionNotification0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_NotifyDebuggerOfWaitCompletionIfNecessary_m566B12643DFD769D51D3CC476B00528CF658CABC((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_3 = Task_get_IsRanToCompletion_m8DFA37869119617244BA82A09040A8495E031619((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ThrowIfExceptional_mD693A139D1600E19B1ACBEFA6DF2D92063BED55B((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_4 = (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )__this->get_m_result_22();
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetException_mAEC49933FB8034AA98C144D4F9122BE42B89BB0B_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, RuntimeObject * ___exceptionObject0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_EnsureContingentPropertiesInitialized_mB59C18080FCEA80351631975D751A478D44449F4((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject * L_1 = ___exceptionObject0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_AddException_mF68C273C2777513AD41B2064C15889F2D978173E((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_Finish_m924F5D1414BDC1A572D3C925CD9FBD4147C09FD5((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (bool)0, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_002c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___tokenToRecord0;
		NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this);
		bool L_1 = ((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_0, (RuntimeObject *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_m77B203D3ACDB89BBACE32DC293B0374ED69A9F4B_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, RuntimeObject * ___cancellationException1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		bool L_0 = Task_AtomicStateUpdate_mCF22C9AE5F97F1576A25CC4085FB7A83937268B8((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (int32_t)((int32_t)67108864), (int32_t)((int32_t)90177536), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = ___tokenToRecord0;
		RuntimeObject * L_2 = ___cancellationException1;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_RecordInternalCancellationRequest_mFA7A466EDA83666B183E9A69D9546F8FF45F99E3((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_CancellationCleanupLogic_m17ACB54C48890F80AE8A7A489671E103767072B1((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0024:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::InnerInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_InnerInvoke_m6A85040F94F47E2F4186134995209AF87ACFBBBD_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 * V_0 = NULL;
	Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * V_1 = NULL;
	{
		RuntimeObject * L_0 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_0 = (Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *)((Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 * L_2 = V_0;
		NullCheck((Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *)L_2);
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_3 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_1_t8EF98923CD51FA5183990F9211D8F90843D4A2F6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_result_22(L_3);
		return;
	}

IL_001c:
	{
		RuntimeObject * L_4 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_action_5();
		V_1 = (Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *)((Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5)));
		Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 * L_6 = V_1;
		RuntimeObject * L_7 = (RuntimeObject *)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this)->get_m_stateObject_6();
		NullCheck((Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *)L_6);
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_8 = ((  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  (*) (Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t72EDE8D5863D0BDF2B630E6BC52E7852E62098A0 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_m_result_22(L_8);
		return;
	}

IL_003e:
	{
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC  Task_1_GetAwaiter_mAD5A3A560A8FCDF7CD0BE14516D9B07B021F9366_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	{
		TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_inline((&L_0), (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return L_0;
	}
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3  Task_1_ConfigureAwait_mF5D1E4299E485936C0682DDCC7A141DE412E6124_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___continueOnCapturedContext0;
		ConfiguredTaskAwaitable_1_tD4A295F39B2BAD2AFBFB5C5AB4C896A2A3F03DD3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredTaskAwaitable_1__ctor_mD570AA3F661F72D4051BA5B379832317ECD78534((&L_1), (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__cctor_mEE5F7DCA071888CA4E8D5332FAEA2233A460FFD0_gshared (const RuntimeMethod* method)
{
	{
		TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * L_0 = (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		((  void (*) (TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_s_Factory_23(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1 * L_1 = ((U3CU3Ec_t22EA2BC6A4B6ECEEF70B43822DAAF893FFFBF8A1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 14)))->get_U3CU3E9_0();
		Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * L_2 = (Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((  void (*) (Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(L_2, (RuntimeObject *)L_1, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 13)))->set_TaskWhenAnyCast_24(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_added_m5D8DDA57FC99B1791E1E685A1307524DF46734E3_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  L_0 = (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_added_m5D8DDA57FC99B1791E1E685A1307524DF46734E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *>(__this + _offset);
	return TrackableChanges_1_get_added_m5D8DDA57FC99B1791E1E685A1307524DF46734E3_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_updated_mF311940D2CD71DEE58C73FD15EB4B479AB24FBA5_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  L_0 = (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_updated_mF311940D2CD71DEE58C73FD15EB4B479AB24FBA5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *>(__this + _offset);
	return TrackableChanges_1_get_updated_mF311940D2CD71DEE58C73FD15EB4B479AB24FBA5_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DE03ED3BBD30D8C75CCED949A87B8DE4162B2_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DE03ED3BBD30D8C75CCED949A87B8DE4162B2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *>(__this + _offset);
	return TrackableChanges_1_get_removed_mCF5DE03ED3BBD30D8C75CCED949A87B8DE4162B2_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215_gshared (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_inline((TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *)(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * L_1 = (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m4BF1449E72C285F5574323A0A073599470C2013A((NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *)(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * L_2 = (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m4BF1449E72C285F5574323A0A073599470C2013A((NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *)(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_inline((TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *)(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 *>(__this + _offset);
	TrackableChanges_1_Dispose_m47925D21FB6931AF2B8EABB086E4B49D12190215(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_added_mE29D4663DA3DB7CB058D0F1DE5B93F3D4DB2D624_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_0 = (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_added_mE29D4663DA3DB7CB058D0F1DE5B93F3D4DB2D624_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *>(__this + _offset);
	return TrackableChanges_1_get_added_mE29D4663DA3DB7CB058D0F1DE5B93F3D4DB2D624_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_updated_mD0E5F69927C728B1138EE8E5F85FFF5734A7FC57_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_0 = (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_updated_mD0E5F69927C728B1138EE8E5F85FFF5734A7FC57_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *>(__this + _offset);
	return TrackableChanges_1_get_updated_mD0E5F69927C728B1138EE8E5F85FFF5734A7FC57_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m1D97F8933EC726E914D9E9EDA60362239BC853D5_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m1D97F8933EC726E914D9E9EDA60362239BC853D5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *>(__this + _offset);
	return TrackableChanges_1_get_removed_m1D97F8933EC726E914D9E9EDA60362239BC853D5_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451_gshared (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_inline((TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *)(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * L_1 = (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC((NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * L_2 = (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mEE25A4E2DF43CDA7B7226C7442AA86573C5DD0BC((NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_inline((TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *)(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B *>(__this + _offset);
	TrackableChanges_1_Dispose_m02FC1D1E5BE006D6AA79779E570855B59703C451(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_added_m5F510AA3B95A7EB6986D1CBD26CB3D9125E63B0C_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t901047647D1B0577009EA387273335B841552234  L_0 = (NativeArray_1_t901047647D1B0577009EA387273335B841552234 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_added_m5F510AA3B95A7EB6986D1CBD26CB3D9125E63B0C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *>(__this + _offset);
	return TrackableChanges_1_get_added_m5F510AA3B95A7EB6986D1CBD26CB3D9125E63B0C_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_updated_m46BE9C4D82C22D932C8DC356F7ABE845B9F0E6FE_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t901047647D1B0577009EA387273335B841552234  L_0 = (NativeArray_1_t901047647D1B0577009EA387273335B841552234 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_updated_m46BE9C4D82C22D932C8DC356F7ABE845B9F0E6FE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *>(__this + _offset);
	return TrackableChanges_1_get_updated_m46BE9C4D82C22D932C8DC356F7ABE845B9F0E6FE_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m287C96B382C552FE4158C67FB1B8E29C60B0C506_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m287C96B382C552FE4158C67FB1B8E29C60B0C506_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *>(__this + _offset);
	return TrackableChanges_1_get_removed_m287C96B382C552FE4158C67FB1B8E29C60B0C506_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28_gshared (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_inline((TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *)(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t901047647D1B0577009EA387273335B841552234 * L_1 = (NativeArray_1_t901047647D1B0577009EA387273335B841552234 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m40A5F82AF21A439D270A7C47B3EF7ED71716FC46((NativeArray_1_t901047647D1B0577009EA387273335B841552234 *)(NativeArray_1_t901047647D1B0577009EA387273335B841552234 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t901047647D1B0577009EA387273335B841552234 * L_2 = (NativeArray_1_t901047647D1B0577009EA387273335B841552234 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m40A5F82AF21A439D270A7C47B3EF7ED71716FC46((NativeArray_1_t901047647D1B0577009EA387273335B841552234 *)(NativeArray_1_t901047647D1B0577009EA387273335B841552234 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_inline((TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *)(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F *>(__this + _offset);
	TrackableChanges_1_Dispose_m575B805F3D6AD1F4347C7860F4B28AB6F3BA2A28(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m10100365EBAEAE4EA0300C58DEB802F249C90B6A_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m10100365EBAEAE4EA0300C58DEB802F249C90B6A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	return TrackableChanges_1_get_added_m10100365EBAEAE4EA0300C58DEB802F249C90B6A_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m2DEF8770C183851CFC7BFC15B73E95D148FE2F44_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m2DEF8770C183851CFC7BFC15B73E95D148FE2F44_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	return TrackableChanges_1_get_updated_m2DEF8770C183851CFC7BFC15B73E95D148FE2F44_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	return TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_gshared (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_inline((TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * L_1 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3((NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * L_2 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m1F79B2DE3F60253E5BA64A21B9A93FFFBCA779D3((NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_inline((TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 *>(__this + _offset);
	TrackableChanges_1_Dispose_mF9E20304F9F443424CD3B78D4D3930329A58333F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	return TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	return TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	return TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_gshared (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * L_1 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC((NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * L_2 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m7A03460B925F39E164998EA307A8B03C7F3771FC((NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_inline((TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F *>(__this + _offset);
	TrackableChanges_1_Dispose_m02C93E25EF9198C86F6ECA358719888505F90FB9(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mEBA03313D9F609CBFED6C642548C871B5B379C9E_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mEBA03313D9F609CBFED6C642548C871B5B379C9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	return TrackableChanges_1_get_added_mEBA03313D9F609CBFED6C642548C871B5B379C9E_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_mBD290DC76278209A657F6FDBBCE2D14B2E4BD320_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_mBD290DC76278209A657F6FDBBCE2D14B2E4BD320_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	return TrackableChanges_1_get_updated_mBD290DC76278209A657F6FDBBCE2D14B2E4BD320_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	return TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_gshared (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_inline((TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * L_1 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD((NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * L_2 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m9E8AA0143535DDBBF4E1192F6F1727B46ECEACCD((NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_inline((TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 *>(__this + _offset);
	TrackableChanges_1_Dispose_mB0C67A542F990DBAFFFF908C9682AE36C2ED2CA2(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_mD119E1CA7E2DF0EF892FC325BA2FB8991D001898_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_mD119E1CA7E2DF0EF892FC325BA2FB8991D001898_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	return TrackableChanges_1_get_added_mD119E1CA7E2DF0EF892FC325BA2FB8991D001898_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mF25DBAC3C0D01EF317AB076B280A9A9146D3405F_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mF25DBAC3C0D01EF317AB076B280A9A9146D3405F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	return TrackableChanges_1_get_updated_mF25DBAC3C0D01EF317AB076B280A9A9146D3405F_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	return TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_gshared (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_inline((TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * L_1 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489((NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * L_2 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mE4E70BA96485FD5663D3951C2E9F9144CECEE489((NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_inline((TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 *>(__this + _offset);
	TrackableChanges_1_Dispose_m5704EAB10EAE46268EE1A895584A2517FD0018B7(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_m1C78A908CC8E8DE4C512F434D31D822E9C8BBAD2_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_m1C78A908CC8E8DE4C512F434D31D822E9C8BBAD2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	return TrackableChanges_1_get_added_m1C78A908CC8E8DE4C512F434D31D822E9C8BBAD2_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m8302E916BBCD4888C3A0536084B94BE17D378DDC_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m8302E916BBCD4888C3A0536084B94BE17D378DDC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	return TrackableChanges_1_get_updated_m8302E916BBCD4888C3A0536084B94BE17D378DDC_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	return TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_gshared (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_inline((TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * L_1 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23((NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * L_2 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m4C7EF7A95799A90878B9E7D33D9B94590D08FE23((NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * L_3 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C((NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mADC3E2683A04903B22C39C6FC60221504F5A680C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_inline((TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 *>(__this + _offset);
	TrackableChanges_1_Dispose_mBE123DD4F53763A6FD649AEC270129813A013051(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.TrackableCollection`1_Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	{
		// return new Enumerator(m_Trackables);
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mA7B2ABFB9289BBCB62B1C25572AB953B60514CED((&L_1), (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t2E1E8D9B1C4E269F7D1A8823FA9D39B68490DB07  TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	return TrackableCollection_1_GetEnumerator_m8F500D7F92731D0C759C54F845BF7824A90E9ABE(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::.ctor(System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = ___trackables0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("trackables");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteral336703A716E6AABC0F3D29AA7F207E54FF0E7ACC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_RuntimeMethod_var);
	}

IL_000e:
	{
		// m_Trackables = trackables;
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = ___trackables0;
		__this->set_m_Trackables_0(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * ___trackables0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	TrackableCollection_1__ctor_m81F2355461255AA98398FD4FC08A246CE6C715DC(_thisAdjusted, ___trackables0, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)_stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_RuntimeMethod_var);
	}

IL_0013:
	{
		// return m_Trackables.Count;
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		NullCheck((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2);
		int32_t L_3 = ((  int32_t (*) (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	return TrackableCollection_1_get_count_mBA1626835EB62D254716B1F5D3CF7B4D80CCF161(_thisAdjusted, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_Item(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_Trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)_stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_RuntimeMethod_var);
	}

IL_0013:
	{
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		// return m_Trackables[trackableId];
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___trackableId0;
		NullCheck((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2, (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_4;
		goto IL_003b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		// catch (KeyNotFoundException e)
		V_1 = (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)((KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)__exception_local);
		// throw new KeyNotFoundException(
		//     string.Format("Trackable with id {0} does not exist in this collection.", trackableId),
		//     e);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_5 = ___trackableId0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = L_5;
		RuntimeObject * L_7 = Box(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)_stringLiteral812EC03C4AEF0AE76BA178C4367F385393486DE8, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * L_9 = V_1;
		KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * L_10 = (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)il2cpp_codegen_object_new(KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m6757CFA9B5CC91705866ABDD9E48681DAB1C71D9(L_10, (String_t*)L_8, (Exception_t *)L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_003b:
	{
		// }
		RuntimeObject * L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	return TrackableCollection_1_get_Item_m27F7E726C3E05769C81480AF6A36806C6B5B0F20(_thisAdjusted, ___trackableId0, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, const RuntimeMethod* method)
{
	{
		// return m_Trackables == null ? 0 : m_Trackables.GetHashCode();
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_1 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		NullCheck((RuntimeObject *)L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_1);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	return TrackableCollection_1_GetHashCode_m564F7D49A962183C47EAA3DAD6BAEBE2159D179D(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// if (!(obj is TrackableCollection<TTrackable>))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4))))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((TrackableCollection<TTrackable>) obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)__this, (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 )((*(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	return TrackableCollection_1_Equals_mDB459FCBA1295E5222A41713C148390D6E23FA03(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::Equals(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method)
{
	{
		// return ReferenceEquals(m_Trackables, other.m_Trackables);
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  L_1 = ___other0;
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_1.get_m_Trackables_0();
		return (bool)((((RuntimeObject*)(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_0) == ((RuntimeObject*)(Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008_AdjustorThunk (RuntimeObject * __this, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	return TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::op_Equality(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>,UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_op_Equality_mAAB68150C03ABA77F5F7BAA392AA60A8D1E71CCF_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___lhs0, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  L_0 = ___rhs1;
		bool L_1 = TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(&___lhs0), (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::op_Inequality(UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>,UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_op_Inequality_m24D6EC32E3E1AC1F3B3A7EE6DADBC00F3A7D3DF9_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___lhs0, TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !lhs.Equals(rhs);
		TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2  L_0 = ___rhs1;
		bool L_1 = TrackableCollection_1_Equals_mA00D6FF692FF4CECDBE047C9D5777AA7E125B008((TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *)(&___lhs0), (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::TryGetTrackable(UnityEngine.XR.ARSubsystems.TrackableId,TTrackable&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_gshared (TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Trackables == null)
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_0 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("This collection has not been initialized.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)_stringLiteral8F64EFE1B08A3FF98033E1C140D4EC9D12C71744, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_RuntimeMethod_var);
	}

IL_0013:
	{
		// return m_Trackables.TryGetValue(trackableId, out trackable);
		Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 * L_2 = (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)__this->get_m_Trackables_0();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___trackableId0;
		RuntimeObject ** L_4 = ___trackable1;
		NullCheck((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2);
		bool L_5 = ((  bool (*) (Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Dictionary_2_t0A52DB56FD1E7867C489BCD59361434AD1DACF83 *)L_2, (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_3, (RuntimeObject **)(RuntimeObject **)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, RuntimeObject ** ___trackable1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 * _thisAdjusted = reinterpret_cast<TrackableCollection_1_t4E8CD95BBE750C12D37A648E5531B758A0D9EAB2 *>(__this + _offset);
	return TrackableCollection_1_TryGetTrackable_mCE7F37E8B50572974BCA69F7BA112BB867D59581(_thisAdjusted, ___trackableId0, ___trackable1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAB286F04F2A457565CDE78F1490E01502996F1DB_gshared (TrackingSubsystem_2_t940E220E7BF619735AEB4307D08C2B732FD50F17 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m88D9D97C5EBFC6B306779204C2B9F01CFBBA0DD3_gshared (TrackingSubsystem_2_tF79BBAD8B9196143398CDA4B5824261B5546A012 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAAE1F7F2E6A9062C1FFA4C11DE3357D46CC737CB_gshared (TrackingSubsystem_2_t996FDA9D3A93102756CBF57E7B9AA9502F185EBB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m2B3F23D233F0A56E8327288262CCA445B2017F97_gshared (TrackingSubsystem_2_t1B8616CDEBD2E6336B863790A17429FDAE52BE94 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAEC7BEE6858C2670B68FE22E9B9FB95325D49690_gshared (TrackingSubsystem_2_tEF849A9635045F125E491A8548A9C02EDF83A21B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7279C620AA3EFCE6A4CAC25EA7066BFF32FFE6D6_gshared (TrackingSubsystem_2_tE5DCDA2AE4A2A8726923CF4B64E99A303DF95F36 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mF34FFC78A325573310952B35D7415A039E5439D8_gshared (TrackingSubsystem_2_t5E87AF02E595B31BFDED1907F5C8E878D4F6376D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mC8ECBCF98EC2C70CA85126E71A33F4CABBEA2A6F_gshared (TrackingSubsystem_2_t08B895827D14FBF9A65858E5EE23626AF78A0EE8 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		((  void (*) (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`2<System.Object,System.Char>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m83FF713DB4A914365CB9A6D213C1D31B46269057_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Char>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m79AB8B3DC587FA8796EC216A623D10DC71A6E202_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_m_Item2_1();
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Char>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m3F946F9DEA25CDC8A34638780152ABF5049BF165_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___item10, Il2CppChar ___item21, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		Il2CppChar L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_mC13D56B08E3BF9AE03134F713E88F59AF49E0986_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_Equals_mC13D56B08E3BF9AE03134F713E88F59AF49E0986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mB8764DDC777A14644C984149BC346B303F8CB7E7_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_Equals_mB8764DDC777A14644C984149BC346B303F8CB7E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)((Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		Il2CppChar L_9 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_10);
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_12 = V_0;
		NullCheck(L_12);
		Il2CppChar L_13 = (Il2CppChar)L_12->get_m_Item2_1();
		Il2CppChar L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_14);
		NullCheck((RuntimeObject*)L_8);
		bool L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		return L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m9F56832E563506449F01AB0020EDF8E99AD82E4D_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_IComparable_CompareTo_m9F56832E563506449F01AB0020EDF8E99AD82E4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)((Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Tuple_2_System_Collections_IStructuralComparable_CompareTo_mC2E0B9CED1C1A4791DD33BD31E7666F6243D3BEF_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		Il2CppChar L_15 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_16);
		Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * L_18 = V_0;
		NullCheck(L_18);
		Il2CppChar L_19 = (Il2CppChar)L_18->get_m_Item2_1();
		Il2CppChar L_20 = L_19;
		RuntimeObject * L_21 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_20);
		NullCheck((RuntimeObject*)L_14);
		int32_t L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_17, (RuntimeObject *)L_21);
		return L_22;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m56B88A8B03BF1856556DB8527DB575A497601841_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_GetHashCode_m56B88A8B03BF1856556DB8527DB575A497601841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Char>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m6A8402570FA26D368443512574A0A03CBFAB7585_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m6A8402570FA26D368443512574A0A03CBFAB7585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_5);
		NullCheck((RuntimeObject*)L_3);
		int32_t L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		int32_t L_8 = Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797((int32_t)L_2, (int32_t)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m4F1D997C1F791EC93E8E153E25B8802A2A111436_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_ToString_m4F1D997C1F791EC93E8E153E25B8802A2A111436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`2<System.Object,System.Char>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_mC29992D30719486284F41C1DC333E9A321947EBE_gshared (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_ITupleInternal_ToString_mC29992D30719486284F41C1DC333E9A321947EBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_2, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		Il2CppChar L_4 = (Il2CppChar)__this->get_m_Item2_1();
		Il2CppChar L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), &L_5);
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_3, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = ___sb0;
		NullCheck((StringBuilder_t *)L_7);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_7, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		NullCheck((RuntimeObject *)L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_8);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m4D9875962578E3B6CC08739D79B226A806756051_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		return;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m7904D914C7F0D8920A3F2F0FB05BDA201DC34F7D_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_Equals_m7904D914C7F0D8920A3F2F0FB05BDA201DC34F7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m76DD43DE79BB19BCD41673F706D96FE167C894B2_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_Equals_m76DD43DE79BB19BCD41673F706D96FE167C894B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)((Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		return L_12;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_m0FB81164CA69BB5F29772A077579254D3F7EE3D4_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_IComparable_CompareTo_m0FB81164CA69BB5F29772A077579254D3F7EE3D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)((Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Tuple_2_System_Collections_IStructuralComparable_CompareTo_mCBD21F1F4D9CC6ACBD39EABCA34A0568453364DE_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		return L_18;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m93554844C338C3CFF8715DF628FCE38039872674_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_GetHashCode_m93554844C338C3CFF8715DF628FCE38039872674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`2<System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mC537B0B94B81AFE40F05E07B16B6741735D1A376_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mC537B0B94B81AFE40F05E07B16B6741735D1A376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		int32_t L_6 = Tuple_CombineHashCodes_mF9D7D71904B3F58A6D8570CE7F5A667115A30797((int32_t)L_2, (int32_t)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m2E2FEB492CEDA8B61F6869909C0376A8F0DEEE9A_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_ToString_m2E2FEB492CEDA8B61F6869909C0376A8F0DEEE9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`2<System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m910380308358C7A726EC2516E3C9D9BD1E5F8EB6_gshared (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_2_System_ITupleInternal_ToString_m910380308358C7A726EC2516E3C9D9BD1E5F8EB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_2, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_5, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		NullCheck((RuntimeObject *)L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_6);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item1_m2E4AA65247AA63A450A9C11604492811CA536DE9_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item2_m949C431D298B80641EAA69F86E66E10759727B3C_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`3<System.Object,System.Object,System.Object>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_3_get_Item3_mAEE5571981A28E2BCA354F228E7741C0F16EBBD0_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return L_0;
	}
}
// System.Void System.Tuple`3<System.Object,System.Object,System.Object>::.ctor(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_m25271C40A72B98D04365B37AA075A393FA07DD82_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___item10;
		__this->set_m_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_m_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_m_Item3_2(L_2);
		return;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_mE4282D65B2614390D3D6131F38CA4F71E38BD30B_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_Equals_mE4282D65B2614390D3D6131F38CA4F71E38BD30B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_1 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		bool L_2 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IStructuralEquatable::Equals(System.Object,System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Boolean System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_mC0D0C105DDA322C1B2E2BEF716D15EE7E7A97B04_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralEquatable_Equals_mC0D0C105DDA322C1B2E2BEF716D15EE7E7A97B04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)((Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = (RuntimeObject *)L_5->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = (RuntimeObject *)L_10->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_16 = (RuntimeObject *)L_15->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		return L_17;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m66B7166E41172B9AC64C38A6EA9B0A7FF946F01C_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_IComparable_CompareTo_m66B7166E41172B9AC64C38A6EA9B0A7FF946F01C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var);
		LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673 * L_1 = ((LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_StaticFields*)il2cpp_codegen_static_fields_for(LowLevelComparer_tE1AAB0112F35E5629CBBA2032E4B98AD63745673_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject* >::Invoke(0 /* System.Int32 System.Collections.IStructuralComparable::CompareTo(System.Object,System.Collections.IComparer) */, IStructuralComparable_t6C0DB09DF1A343F629456373DB2D0CA3EAF0E939_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject *)L_0, (RuntimeObject*)L_1);
		return L_2;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)((Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject *)__this);
		Type_t * L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_3);
		String_t* L_5 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_6, (String_t*)L_5, (String_t*)_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Tuple_3_System_Collections_IStructuralComparable_CompareTo_mD4E0DFF6339122FF9BD1CDA69488929C316F09CA_RuntimeMethod_var);
	}

IL_002f:
	{
		V_1 = (int32_t)0;
		RuntimeObject* L_7 = ___comparer1;
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_m_Item1_0();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject * L_10 = (RuntimeObject *)L_9->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_7);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_1 = (int32_t)L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___comparer1;
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_m_Item2_1();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = (RuntimeObject *)L_16->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_14);
		int32_t L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_1 = (int32_t)L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___comparer1;
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_m_Item3_2();
		Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject * L_24 = (RuntimeObject *)L_23->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_21);
		int32_t L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		return L_25;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m1AED3AC52D43DA1716AA4458567FC4E6F7454B1A_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_GetHashCode_m1AED3AC52D43DA1716AA4458567FC4E6F7454B1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var);
		ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23 * L_0 = ((ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_StaticFields*)il2cpp_codegen_static_fields_for(ObjectEqualityComparer_t72A30310D4F4EB2147D08A989E157CCCEEC78C23_il2cpp_TypeInfo_var))->get_Default_0();
		NullCheck((RuntimeObject*)__this);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer) */, IStructuralEquatable_t3E75B180771187E7B568B32E61FE58C53BDCAE7D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Int32 System.Tuple`3<System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m64C75EE1F144BBF0539D92AEC518ECEF964CC28A_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m64C75EE1F144BBF0539D92AEC518ECEF964CC28A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		int32_t L_9 = Tuple_CombineHashCodes_m34B16565FCB93CC63DAF544CC55CD4459A7435AB((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m96B918423D9BBE3EA66EBFE4A617DFF628ECEA42_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_ToString_m96B918423D9BBE3EA66EBFE4A617DFF628ECEA42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_1, (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_3 = InterfaceFuncInvoker1< String_t*, StringBuilder_t * >::Invoke(0 /* System.String System.ITupleInternal::ToString(System.Text.StringBuilder) */, ITupleInternal_tCDD0D789ADC1AD5E21563EA2F6177C41AEF60F69_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (StringBuilder_t *)L_2);
		return L_3;
	}
}
// System.String System.Tuple`3<System.Object,System.Object,System.Object>::System.ITupleInternal.ToString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m5B9310EE550CC41905FF3002D70DEB87884DED37_gshared (Tuple_3_t64B8D81845E79878B9253853D4E5D72B5117DA4E * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tuple_3_System_ITupleInternal_ToString_m5B9310EE550CC41905FF3002D70DEB87884DED37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_m_Item1_0();
		NullCheck((StringBuilder_t *)L_0);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = ___sb0;
		NullCheck((StringBuilder_t *)L_2);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_2, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = ___sb0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_m_Item2_1();
		NullCheck((StringBuilder_t *)L_3);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_3, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		StringBuilder_t * L_5 = ___sb0;
		NullCheck((StringBuilder_t *)L_5);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_5, (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = ___sb0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_m_Item3_2();
		NullCheck((StringBuilder_t *)L_6);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F((StringBuilder_t *)L_6, (RuntimeObject *)L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = ___sb0;
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_8, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_9 = ___sb0;
		NullCheck((RuntimeObject *)L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_9);
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m5F32E198862372BC9F9C510790E5098584906CAC_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m70E2FD23ACE5513A49D47582782076A592E0A1AF_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_mB8D130AFCEE1037111D5F6387BF34F7893848F45_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item3_2();
		return L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_mCB7860299592F8FA0F6F60C1EBA20767982B16DB_gshared (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item4_3();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T1 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_mB1DB3A2FC05B5B5E5B77912C84AFA3BF7FC379EE_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return L_0;
	}
}
// T2 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m793197594101F09AE8784336E26407E9D9A1EE0F_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return L_0;
	}
}
// T3 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item3_mCD9FE68A6D1886B978288B54AF485139F1EBCC88_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item3_2();
		return L_0;
	}
}
// T4 System.Tuple`4<System.Object,System.Object,System.Object,System.Object>::get_Item4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item4_mB8E300B37D00D2559EAA714799D1C6CB28D8006C_gshared (Tuple_4_t476C850B9EE4258E8E165759EC4ED6CB5FE3EF44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item4_3();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m0251CCA621F83D757C11A2CC5026DDA24A088866_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mF4A4312C4C5D7EC10F1D0AC32360D20951F3E276_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, bool ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mF4A4312C4C5D7EC10F1D0AC32360D20951F3E276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mADA530A569FA02CEE365550C0B1364847F902DAC_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m50A0084C1E73C78361F32170CF616D08681D7380_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m50A0084C1E73C78361F32170CF616D08681D7380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m7320ACEFEBD2FA7D50C947BE9CEC62DAE429A329_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mA4ADF56200888B2A297C5913DA00A89F11BD87C5_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m16F774E0F869579B89A02E33198957BF2B362763_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mA6A81E3B39C49A2A483B7EC5A7FC6F305C84BDCD_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mA6A81E3B39C49A2A483B7EC5A7FC6F305C84BDCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mCC90A51C5C963477EEE746E3D3856AEBE78FB78A_gshared (UnityAction_1_t98C9D5462DAC5B38057FFF4D18D84AAE4783CBE2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mEAA1361DECE0C4E7F731346AD77D6999664527CA_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, float ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mEAA1361DECE0C4E7F731346AD77D6999664527CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m936D976DB36E14668A40522AADE9283923079869_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m7C92F18128CD7BC314EECF7D6FBE3F0D99B87597_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mF6CE051EB914150BEB88244003A263509CD42FDE_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m5AA1F690449F2F9671E0B94633F97A1FAD7E3ED1_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mDCEEB031BDBB99CF9F4FD8C66C8764E7145F233E_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, int32_t ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_mDCEEB031BDBB99CF9F4FD8C66C8764E7145F233E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m490BFF59EA4C5D89B467DFF2EBB8294B4D2B625D_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m988975393D43562D1485F4253E0D0960EA45BDE1_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mBE8D06B5C36F3C91DE37A9D965AEB4B499832596_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mEA01486964659C4609BA96B58825B2E9B851FE10_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg00, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_mEA01486964659C4609BA96B58825B2E9B851FE10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m66976206F24D939E2132FAB88213AB25CBC0AEED_gshared (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m8727842F47B6F77FCB70DE281A21C3E1DD2C7B5E_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mC190ED9AED96E2FE7A68F86FF0DE1AF6B3F8C270_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m61A3E25D9705ECD97BB9634081BFE1F51A11BB72_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4915ABA44B9B53926A3A694CDF011EF8C7345CD6_gshared (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mB86D6414884FDC1E91052C11EDE9D2D76F7ECA4F_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m6F58BD0703FA3C41CC7D6F3230771D8B1DF6CEC4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_m88F46BFD94198E51067773C687AF1EA4E56BA6C9_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m61C295D3CAE75DAA73F736514C0F8305F21BF4D4_gshared (UnityAction_3_tFF5D8322DAB4A9502640ED870076B13C311DBDCE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_m77B1860A1697D777A50B461899187B1F788FED67_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m33FE7C261E18C40BF698970133F4C4AAE221453C_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, ___arg33, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, ___arg33, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_m340C3A0B9B1D3D5617E73EFF0AECC0D26BA2434B_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mD613D87947DBD4EAA4AFAB2EAA52C64E61B53393_gshared (UnityAction_4_tF927F6A138A00CB05261F7DEA257F9DBA262A3DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m0DDD8A7A01D83C10E72C71631F8487FE817B264D_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m883CB9322DD397C11303E11CE1D75DE4DAB7A2A1_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m883CB9322DD397C11303E11CE1D75DE4DAB7A2A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m9F6A762AD5938FB4E433C68A6CAE0E064358B79E_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m042F0FF8A168ACCAC76DFF33398FF72BE89A13D4_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = ___action0;
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_1 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		NullCheck((InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_tB1DAF383EC84453DA99582568ED89C6570E979E9 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_24 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_24, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_28 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28);
		int32_t L_29 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_28, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_1 = ((  BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * (*) (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_AddCall_mB4825708CFE71BBF9B167EB16FC911CFF95D101C((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase_RemoveListener_m0B091A723044E4120D592AC65CBD152AC3DF929E((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mAEF284CEE451CDF002B423EAD1920E36A12A9CF0_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mAEF284CEE451CDF002B423EAD1920E36A12A9CF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m7B52283F3C9BA5BFFADCEA8C22119BD2DEF4FD39_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_1_GetDelegate_m38113512C8395BCA851A99D1A947C8C56FF66C45_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * L_0 = ___action0;
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_1 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_0 = UnityEventBase_PrepareInvoke_m999D0F37E0D88375576323D30B67ED7FDC7A779D((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		NullCheck((InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t09F9436D65A6C1E477AD9997511C4F06F5E9CFCF *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_10 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_4 = (InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)IsInst((RuntimeObject*)L_10, InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741_il2cpp_TypeInfo_var));
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 * L_13 = V_4;
		NullCheck((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13);
		InvokableCall_Invoke_mC0E0B4D35F0795DCF2626DC15E5E92417430AAD7((InvokableCall_tFCDA359B453E64E6655CE5FF57315417F6EBB741 *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_16 = List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_mBB4A194FB56DDFDE48C8A7CCB1124DB0B00BA90D_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_16;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_22 = V_6;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22);
		VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_22, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD * L_26 = V_0;
		NullCheck((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26);
		int32_t L_27 = List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_inline((List_1_tE59E678A3E54798EF83514F25BE9C5E3AAC595BD *)L_26, /*hidden argument*/List_1_get_Count_m16FFAC86792F8631507D4AA54DAD073DBD95E6BF_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mF60EF62AFB15A35F2DD69476A73537390423F21A_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m9DEDA5637D671AC58D580000A01B4B335B9923F0_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m9DEDA5637D671AC58D580000A01B4B335B9923F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_2_GetDelegate_m8F25D40B052080876D1C4762AA6E7E6703D0249E_gshared (UnityEvent_2_t28592AD5CBF18EB6ED3BE1B15D588E132DA53582 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 * L_2 = (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t652C936CD7F97AA02F850799566B7AAD951D7F90 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m4B93C635FB8DB80244E4979D82F6F94941196483_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_m28C35DB6F6DBCF1315EC5755FBA0B5DB80822DB7_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_m28C35DB6F6DBCF1315EC5755FBA0B5DB80822DB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_3_GetDelegate_m4D1CD01F37200B3D0525A100BCE71287EA769653_gshared (UnityEvent_3_tA3B30968AC27AD98A85661A91742D94AB4BFF7D4 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 * L_2 = (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t6248B520025BF491335E1E2175E578485B570870 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_mAD32A45894B24DF8063BA635592B37EAEAB2C63A_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		NullCheck((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this);
		UnityEventBase__ctor_m8F423B800E573ED81DF59EB55CD88D48E817B101((UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m18804249F2696D07B6E5723A86A95E2A98424E62_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, String_t* ___name0, Type_t * ___targetObjType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m18804249F2696D07B6E5723A86A95E2A98424E62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		Type_t * L_0 = ___targetObjType1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_3 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_6;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_9;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_mBA413E99550A6AD8B36F5BEB8682B1536E976C36((Type_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * UnityEvent_4_GetDelegate_mCC9B16CF07EAAA26AE65B3BB31CFFC22031EE4A0_gshared (UnityEvent_4_t2D7325679F7C830EC2A1EE20D9A6D86EE1CB630F * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD * L_2 = (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t201A5585285FF7B4E8B7C74571F84D14F38008AD *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tEE2D6A7BA0C533CE83516B9CB652FB0982400784 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_m35276CCDAA3170EBDD935CB0B31CAF5038364307_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = ___dictionary0;
		__this->set__dict_0(L_0);
		return;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_get_Count_m99DC7D2C701935EDE06433F5B41DE352943CAB6B_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get__size_2();
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsReadOnly_m2BC2F609E676482B932FD23007E05D5DF8F43AAE_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Add_mEDFAA24C8377C6686846F171F13A4738C572B34C_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Add_mEDFAA24C8377C6686846F171F13A4738C572B34C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Add_mEDFAA24C8377C6686846F171F13A4738C572B34C_RuntimeMethod_var);
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Clear_mBDFD3F15403638E3705A3A5FB5B4726EB4DD1E1E_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Contains_m25C703E84677DDF5DF666C094B5AB1214DD78F39_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0);
		bool L_2 = ((  bool (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_CopyTo_mD4FBF161842060267625FE6D1706D3B3071BCFD6_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___array0;
		int32_t L_3 = ___arrayIndex1;
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_4 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_4);
		int32_t L_5 = ((  int32_t (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_1, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeArray * L_0 = ___array0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray * L_1 = ___array0;
		NullCheck((RuntimeArray *)L_1);
		int32_t L_2 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, (String_t*)_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5, (String_t*)_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_RuntimeMethod_var);
	}

IL_001c:
	{
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_4 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4->get_values_1();
		RuntimeArray * L_6 = ___array0;
		int32_t L_7 = ___index1;
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_8 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_8);
		int32_t L_9 = ((  int32_t (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, (int32_t)0, (RuntimeArray *)L_6, (int32_t)L_7, (int32_t)L_9, /*hidden argument*/NULL);
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_10, (String_t*)_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8, (String_t*)_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ValueList_System_Collections_ICollection_CopyTo_mC671FCAF39ED4A98F33DBBACC517C1E1915E5D96_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_004e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Insert(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Insert_m8236530EE2C1F4DF70CC78C09641213202543B8D_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Insert_m8236530EE2C1F4DF70CC78C09641213202543B8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Insert_m8236530EE2C1F4DF70CC78C09641213202543B8D_RuntimeMethod_var);
	}
}
// TValue System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueList_get_Item_mFC16394BCC26B1544FFA559CB9C33B8E3673904E_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		int32_t L_1 = ___index0;
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::set_Item(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_set_Item_mC1C2DF772219861FD6D6C77E2E4ED58E43A3D990_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_set_Item_mC1C2DF772219861FD6D6C77E2E4ED58E43A3D990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_set_Item_mC1C2DF772219861FD6D6C77E2E4ED58E43A3D990_RuntimeMethod_var);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_GetEnumerator_m917CB0572FAA9806CCEBD17A15307E3620972937_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 * L_1 = (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *, SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_IEnumerable_GetEnumerator_mBE8C836112D2F86587E748A624AEA02C909B4F75_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 * L_1 = (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_tFC6F404C05E497B235723FE6A39B17DCFA6730D5 *, SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::IndexOf(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_IndexOf_m25C0CC9EC9530052EE14BB4DBB3D0428B351202F_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_0 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		RuntimeObject * L_2 = ___value0;
		SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 * L_3 = (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)__this->get__dict_0();
		NullCheck((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_3);
		int32_t L_4 = ((  int32_t (*) (SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_tE05AAF00C60A7522E7433E50C20E0E612FC4A230 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t L_5 = ((  int32_t (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1, (RuntimeObject *)L_2, (int32_t)0, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Remove_m45733D09CEC292C4EBBB1D6127FAC8C9F1E903C7_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Remove_m45733D09CEC292C4EBBB1D6127FAC8C9F1E903C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Remove_m45733D09CEC292C4EBBB1D6127FAC8C9F1E903C7_RuntimeMethod_var);
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_gshared (ValueList_t43FE6AB52ED1D68A42D8886E575982F56D26450A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_RemoveAt_m6F65C121FB1F918308DCA8ED173593EBB684E1D2_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_mA1959C8806FD793BA7F75728EDB2A8BC1F8B9C6A_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * ___dictionary0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = ___dictionary0;
		__this->set__dict_0(L_0);
		return;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_get_Count_m7E6989C8A5AFBE2E0FAAF973725FB41C197644D3_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_0);
		int32_t L_1 = (int32_t)L_0->get__size_2();
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsReadOnly_mD5F886B93A6C469BC94022293D030AEF7EAE7AF8_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Add_mA868EA144DB2B813E52858FCE00E7308EC56D479_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Add_mA868EA144DB2B813E52858FCE00E7308EC56D479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Add_mA868EA144DB2B813E52858FCE00E7308EC56D479_RuntimeMethod_var);
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Clear_m855B464EBAC8C952681D824F4C86D6D240BC92F0_RuntimeMethod_var);
	}
}
// System.Boolean System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::Contains(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Contains_mF1C372A86187051529AF63994FCCD246DC945DAE_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0);
		bool L_2 = ((  bool (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_CopyTo_m7AB0B04BD2E473CF43AE7CE73629E10DBE576DDE_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___array0;
		int32_t L_3 = ___arrayIndex1;
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_4 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_4);
		int32_t L_5 = ((  int32_t (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_1, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)L_3, (int32_t)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeArray * L_0 = ___array0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray * L_1 = ___array0;
		NullCheck((RuntimeArray *)L_1);
		int32_t L_2 = Array_get_Rank_mE9E4804EA433AA2265F9D9CA3B1B5082ECD757D0((RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, (String_t*)_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5, (String_t*)_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_RuntimeMethod_var);
	}

IL_001c:
	{
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_4 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4->get_values_1();
		RuntimeArray * L_6 = ___array0;
		int32_t L_7 = ___index1;
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_8 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_8);
		int32_t L_9 = ((  int32_t (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, (int32_t)0, (RuntimeArray *)L_6, (int32_t)L_7, (int32_t)L_9, /*hidden argument*/NULL);
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_tFD610FDA00012564CB75AFCA3A489F29CF628784_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_10, (String_t*)_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8, (String_t*)_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ValueList_System_Collections_ICollection_CopyTo_mB1FCE0C1AE93514AF57AE589690BDF59A5F7B7D9_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_004e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::Insert(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Insert_m1AB2E5F947710A95F1BA43456117C68B757C3790_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Insert_m1AB2E5F947710A95F1BA43456117C68B757C3790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Insert_m1AB2E5F947710A95F1BA43456117C68B757C3790_RuntimeMethod_var);
	}
}
// TValue System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueList_get_Item_m7EF0D0A340599D663D795D60501E5C994E1564A4_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		int32_t L_1 = ___index0;
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_2;
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::set_Item(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_set_Item_mA78D7F0F2DF49C6F8215C1A7B871FFC6D44493BA_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_set_Item_mA78D7F0F2DF49C6F8215C1A7B871FFC6D44493BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_set_Item_mA78D7F0F2DF49C6F8215C1A7B871FFC6D44493BA_RuntimeMethod_var);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_GetEnumerator_mA4043BC2F3B66EA9961CE8DB8A8D2EC211E738A6_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 * L_1 = (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *, SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_IEnumerable_GetEnumerator_m046D93E98E0BB0737522322FF0E050B21FC0F135_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 * L_1 = (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (SortedListValueEnumerator_t3DD9939FB8EBF9AC5E66ECC8223CE188C666F838 *, SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::IndexOf(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_IndexOf_m033D314470332F40D5C62902A664A98E47916B65_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_0 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0->get_values_1();
		RuntimeObject * L_2 = ___value0;
		SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 * L_3 = (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)__this->get__dict_0();
		NullCheck((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_3);
		int32_t L_4 = ((  int32_t (*) (SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SortedList_2_t24779EF2FE8C87E99D9FE00F3E49EB1BD886BDF0 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t L_5 = ((  int32_t (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, RuntimeObject *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1, (RuntimeObject *)L_2, (int32_t)0, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// System.Boolean System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::Remove(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Remove_m7FB4206E1E278B7458191E5CC816ED23EB517534_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_Remove_m7FB4206E1E278B7458191E5CC816ED23EB517534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_Remove_m7FB4206E1E278B7458191E5CC816ED23EB517534_RuntimeMethod_var);
	}
}
// System.Void System.Collections.Generic.SortedList`2_ValueList<System.Object,System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_gshared (ValueList_t17186FF49B6D0EB4E1697C6181E75661ED339940 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, (String_t*)_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ValueList_RemoveAt_mE1515877EFCCABCBB7B5B7D4D6DEB0A5E075CF48_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable_Iterator`1<TSource> System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Boolean System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable_Iterator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Void System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable_WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable_Iterator`1<TSource> System.Linq.Enumerable_WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Boolean System.Linq.Enumerable_WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_mE15D88E34121AF462DB802131D3404A52F89F3B2_gshared (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 * __this, const RuntimeMethod* method)
{
	{
		// public sealed override bool running => m_Running;
		bool L_0 = (bool)__this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_m1AB62D94EDB9C51741952EBD3CADA092F283012F_gshared (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 * __this, const RuntimeMethod* method)
{
	{
		// Stop();
		NullCheck((Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)__this);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 *)__this);
		// OnDestroyed();
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroyed() */, (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_m00E49660B1E9E35471FD6608320F61548E6AA38E_gshared (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 * __this, const RuntimeMethod* method)
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStart() */, (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->set_m_Running_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mD9148C5EB5A65EC95CD354171CE253F9BCCF947C_gshared (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		NullCheck((XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStop() */, (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 *)__this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->set_m_Running_1((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_m021B9A195F632D8979FCF0567A90004BA691F58D_gshared (XRSubsystem_1_t0D417187FDCF789EDE0281B8F58F253830047A93 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 *)__this);
		((  void (*) (Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Subsystem_1_t4575204F3B43AA9E23E2950B19B23DDA26158377 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptor_get_subsystemImplementationType_mD252968F35A3D60FDC357C2DCA6CA0A0B71C84C0_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptor_get_id_mC3D7972588D4B57F906A06CEE54A61B55D1306DB_inline (SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettings_get_Instance_m8D7FC68414773249E7C8EEF06048916FD7E7D68DGenerics9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8Generics9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		IL2CPP_RUNTIME_CLASS_INIT(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = ((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_StaticFields*)il2cpp_codegen_static_fields_for(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F_il2cpp_TypeInfo_var))->get_s_ActiveLoader_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Task_get_IsWaitNotificationEnabledOrNotRanToCompletion_m08AE8FC3C2730156E5244176D8DABEE9741D1B6B_inline (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stateFlags_9();
		il2cpp_codegen_memory_barrier();
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)285212672)))) == ((int32_t)((int32_t)16777216)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m43F8BCF94DDF78BFE39CE22284AF899D07D5D1F2_gshared_inline (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m58DA5358DE2D31E0F2CB9FB0C13D22B144367738_gshared_inline (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_m73B587E26B13AAE76EA1565E9430D94E5C2AD0CF_gshared_inline (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskAwaiter_1__ctor_mCBCB3F6CE4D1A4E9A010774D0B4E14B3AC60E121_gshared_inline (TaskAwaiter_1_t3024EC798FC602A0B55169F4A378BE26B1C6E0FC * __this, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___task0, const RuntimeMethod* method)
{
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_0 = ___task0;
		__this->set_m_task_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_added_m5D8DDA57FC99B1791E1E685A1307524DF46734E3_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  L_0 = (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  TrackableChanges_1_get_updated_mF311940D2CD71DEE58C73FD15EB4B479AB24FBA5_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  L_0 = (NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mCF5DE03ED3BBD30D8C75CCED949A87B8DE4162B2_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m373CF40B644F4217C309DDEF94873159AC7BFCC8_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mBC8340A8F13F22437477DD6EB6B71D9109AAEE7C_gshared_inline (TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_added_mE29D4663DA3DB7CB058D0F1DE5B93F3D4DB2D624_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_0 = (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  TrackableChanges_1_get_updated_mD0E5F69927C728B1138EE8E5F85FFF5734A7FC57_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  L_0 = (NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m1D97F8933EC726E914D9E9EDA60362239BC853D5_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mD5F26E92FCE0ACD7FB03D7CA12E4C90CC7BE0318_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m55E8A5FE92C755BD3027CCF81B6220A7A4B1431B_gshared_inline (TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_added_m5F510AA3B95A7EB6986D1CBD26CB3D9125E63B0C_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t901047647D1B0577009EA387273335B841552234  L_0 = (NativeArray_1_t901047647D1B0577009EA387273335B841552234 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t901047647D1B0577009EA387273335B841552234  TrackableChanges_1_get_updated_m46BE9C4D82C22D932C8DC356F7ABE845B9F0E6FE_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t901047647D1B0577009EA387273335B841552234  L_0 = (NativeArray_1_t901047647D1B0577009EA387273335B841552234 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m287C96B382C552FE4158C67FB1B8E29C60B0C506_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m76D35901058B5AE1B1EC870A2991DAC2B3BDB7EC_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m1507C325AA187BAC09D3EBB799A689094FFBCBDA_gshared_inline (TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_added_m10100365EBAEAE4EA0300C58DEB802F249C90B6A_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  TrackableChanges_1_get_updated_m2DEF8770C183851CFC7BFC15B73E95D148FE2F44_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  L_0 = (NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m9A62C1E5CE45BA830496FF2AF2F2688FAD90FE3D_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBEB5A961E31246B72D4AD8FED8C8A213522A6DE0_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m85CBA15543C01AF0B8732C8D6667C892838E5F75_gshared_inline (TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_added_mE2DAB671C35440089855E3FA56312B779914939F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  TrackableChanges_1_get_updated_mDD1EA7192EFEFC4A8FB5949F6F995268E940D5AC_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  L_0 = (NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEF24C86CF94D54D18AE8E112F4CA05CB76E8933D_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m5536BD31FE4DB57C15510968C98028E14C11A88F_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m299FD56A5F8BE0F45D92EF1EE949EDF1F3C8198B_gshared_inline (TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_added_mEBA03313D9F609CBFED6C642548C871B5B379C9E_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  TrackableChanges_1_get_updated_mBD290DC76278209A657F6FDBBCE2D14B2E4BD320_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  L_0 = (NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_mEC30FED77E34A88C364F2E362FE32EC698BEB887_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA9BF6264382E9672D0DC58075D413173A8999A25_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m0FA4107477AF6D223F4E895FB2A9C2E4177032F1_gshared_inline (TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_added_mD119E1CA7E2DF0EF892FC325BA2FB8991D001898_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  TrackableChanges_1_get_updated_mF25DBAC3C0D01EF317AB076B280A9A9146D3405F_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  L_0 = (NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m948634C0C3C7BD7A998A406072363329879E18F0_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mDDCCFC96265FFD469794EDC626D511ECB314CBB1_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m615F21D53FFB3723C3BE9DF174847CDD1D81C634_gshared_inline (TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_added_m1C78A908CC8E8DE4C512F434D31D822E9C8BBAD2_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  TrackableChanges_1_get_updated_m8302E916BBCD4888C3A0536084B94BE17D378DDC_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  L_0 = (NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  TrackableChanges_1_get_removed_m125D9D557247BB9617DD25C04BEC844F552047D3_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  L_0 = (NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m95F738B28A65F72A6BA74C54DCACC8ED0E527B53_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m4C0F91C2A4480343AFD5E1BF90C0BB92CEC2CF7B_gshared_inline (TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
