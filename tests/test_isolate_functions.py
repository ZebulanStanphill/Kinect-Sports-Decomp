"""Exercise split isolation on small configuration files."""

import contextlib
import io
import json
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
import isolate_functions
sys.path.pop(0)


class IsolateFunctionsTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        root = Path(self.temp.name)
        self.symbols = root / "symbols.txt"
        self.splits = root / "splits.txt"
        self.objects = root / "objects.json"
        self.symbols.write_bytes(
            b"fn_82400E48 = .text:0x82400E48; // type:function size:0x10\n"
            b"fn_82400E58 = .text:0x82400E58; // type:function size:0x8\n"
        )
        self.splits.write_bytes(
            b"auto_match/func_82400E48.c:\n"
            b"\t.text       start:0x82400E48 end:0x82400E58\n"
        )
        self.objects.write_bytes(
            b'{\n  "game": {\n    "cflags": "base",\n    "objects": {\n'
            b'      "auto_match/func_82400E48.c": "NonMatching"\n    }\n  }\n}\n'
        )

    def isolate(self, *addresses):
        with patch.object(isolate_functions, "SYMBOLS", self.symbols), \
                patch.object(isolate_functions, "SPLITS", self.splits), \
                patch.object(isolate_functions, "OBJECTS", self.objects), \
                patch.object(sys, "argv", ["isolate_functions.py", *addresses]), \
                contextlib.redirect_stdout(io.StringIO()):
            isolate_functions.main()

    def test_new_split_keeps_lf_line_endings(self):
        self.isolate("0x82400E58")
        self.assertEqual(self.splits.read_bytes(), (
            b"auto_match/func_82400E48.c:\n"
            b"\t.text       start:0x82400E48 end:0x82400E58\n"
            b"auto_match/func_82400E58.c:\n"
            b"\t.text       start:0x82400E58 end:0x82400E60\n"
        ))
        objects = self.objects.read_bytes()
        self.assertNotIn(b"\r\n", objects)
        self.assertEqual(json.loads(objects)["game"]["objects"], {
            "auto_match/func_82400E48.c": "NonMatching",
            "auto_match/func_82400E58.c": "MISSING",
        })

    def test_existing_split_is_left_unchanged(self):
        splits = self.splits.read_bytes()
        objects = self.objects.read_bytes()
        self.isolate("0x82400E48")
        self.assertEqual(self.splits.read_bytes(), splits)
        self.assertEqual(self.objects.read_bytes(), objects)


if __name__ == "__main__":
    unittest.main()
