unit FollowDB_FFI;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils;

// FFI Declarations
procedure fdb_validate_gui_layout(); cdecl; external 'followdb.dll';
function fdb_simulate_query(query_ptr: PChar; query_len: DWord; out_buf: PChar; out_max: DWord): DWord; cdecl; external 'followdb.dll';

implementation

end.
