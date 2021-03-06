/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(_vxwapi_isAbs__doc__,
"isAbs($module, path, /)\n"
"--\n"
"\n"
"Check if path is an absolute path on VxWorks (since not all VxWorks absolute paths start with /)");

#define _VXWAPI_ISABS_METHODDEF    \
    {"isAbs", (PyCFunction)_vxwapi_isAbs, METH_O, _vxwapi_isAbs__doc__},

static PyObject *
_vxwapi_isAbs_impl(PyObject *module, const char *path);

static PyObject *
_vxwapi_isAbs(PyObject *module, PyObject *arg)
{
    PyObject *return_value = NULL;
    const char *path;

    if (!PyArg_Parse(arg, "s:isAbs", &path)) {
        goto exit;
    }
    return_value = _vxwapi_isAbs_impl(module, path);

exit:
    return return_value;
}

PyDoc_STRVAR(_vxwapi_rtp_spawn__doc__,
"rtp_spawn($module, process_args, executable_list, close_fds,\n"
"          py_fds_to_keep, cwd_obj, env_list, p2cread, p2cwrite,\n"
"          c2pread, c2pwrite, errread, errwrite, errpipe_read,\n"
"          errpipe_write, restore_signals, call_setsid, preexec_fn, /)\n"
"--\n"
"\n"
"Spawn a real time process in the vxWorks OS");

#define _VXWAPI_RTP_SPAWN_METHODDEF    \
    {"rtp_spawn", (PyCFunction)(void(*)(void))_vxwapi_rtp_spawn, METH_FASTCALL, _vxwapi_rtp_spawn__doc__},

static PyObject *
_vxwapi_rtp_spawn_impl(PyObject *module, PyObject *process_args,
                       PyObject *executable_list, int close_fds,
                       PyObject *py_fds_to_keep, PyObject *cwd_obj,
                       PyObject *env_list, int p2cread, int p2cwrite,
                       int c2pread, int c2pwrite, int errread, int errwrite,
                       int errpipe_read, int errpipe_write,
                       int restore_signals, int call_setsid,
                       PyObject *preexec_fn);

static PyObject *
_vxwapi_rtp_spawn(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *process_args;
    PyObject *executable_list;
    int close_fds;
    PyObject *py_fds_to_keep;
    PyObject *cwd_obj;
    PyObject *env_list;
    int p2cread;
    int p2cwrite;
    int c2pread;
    int c2pwrite;
    int errread;
    int errwrite;
    int errpipe_read;
    int errpipe_write;
    int restore_signals;
    int call_setsid;
    PyObject *preexec_fn;

    if (!_PyArg_ParseStack(
           args, nargs, "OOiO!OOiiiiiiiiiiO:rtp_spawn",
        &process_args, &executable_list,
                &close_fds, &PyTuple_Type, &py_fds_to_keep,
                &cwd_obj, &env_list,
                &p2cread, &p2cwrite, &c2pread, &c2pwrite,
                &errread, &errwrite, &errpipe_read, &errpipe_write,
                &restore_signals, &call_setsid, &preexec_fn)) {
        goto exit;
    }
    return_value = _vxwapi_rtp_spawn_impl(module, process_args, executable_list, close_fds, py_fds_to_keep, cwd_obj, env_list, p2cread, p2cwrite, c2pread, c2pwrite, errread, errwrite, errpipe_read, errpipe_write, restore_signals, call_setsid, preexec_fn);

exit:
    return return_value;
}
/*[clinic end generated code: output=fd22aa17f7d0b8db input=a9049054013a1b77]*/
