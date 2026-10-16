"""Exercise compiler launch and result reporting without proprietary game files."""

import contextlib
import io
import json
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
import evaluate_candidate
sys.path.pop(0)


class EvaluateCandidateTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix="candidate test ")
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name).resolve()
        original = self.root / "build/4D5308C9/obj/auto_match/func_82400E48.obj"
        original.parent.mkdir(parents=True)
        original.touch()
        self.compiler = self.root / "compiler tools/cl.exe"
        self.compiler.parent.mkdir()
        self.compiler.touch()
        self.source = self.root / "input candidate.c"
        self.source.write_text("int fn_82400E48(void) { return 1; }\n", encoding="utf-8")
        self.argv = [
            "evaluate_candidate.py", "0x82400E48", str(self.source),
            "--lab", str(self.root / "lab"), "--compiler", str(self.compiler),
            "--cflags", "/nologo", "/c", "/TC", "/O1",
        ]

    def run_evaluation(self, platform, env=None, which=None, compile_exit_code=0):
        def run(command, **kwargs):
            if command[0] == "test-objdiff":
                output = Path(command[command.index("-o") + 1])
                symbol = {"name": "fn_82400E48", "size": 448, "match_percent": 87.5}
                output.write_text(json.dumps({
                    "left": {"symbols": [symbol]}, "right": {"symbols": [symbol]},
                }), encoding="utf-8")
                return subprocess.CompletedProcess(command, 0, stdout="")
            self.assertEqual((kwargs["cwd"] / "candidate.c").read_bytes(),
                             self.source.read_bytes())
            return subprocess.CompletedProcess(command, compile_exit_code, stdout="compiler output")

        environment = {"OBJDIFF_CLI": "test-objdiff", **(env or {})}
        with patch.object(evaluate_candidate, "ROOT", self.root), \
                patch.object(sys, "argv", self.argv), \
                patch.object(sys, "platform", platform), \
                patch.dict(evaluate_candidate.os.environ, environment, clear=True), \
                patch.object(evaluate_candidate.shutil, "which", side_effect=which or (lambda _: None)), \
                patch.object(evaluate_candidate.subprocess, "run", side_effect=run) as process, \
                contextlib.redirect_stdout(io.StringIO()) as output:
            exit_code = evaluate_candidate.main()
        report = json.loads(output.getvalue())
        saved = list((self.root / "lab/candidate-evals/82400E48").glob("run-*/result.json"))
        self.assertEqual(len(saved), 1)
        self.assertEqual(json.loads(saved[0].read_text(encoding="utf-8")), report)
        return exit_code, report, process

    def assert_success(self, exit_code, report, process, prefix):
        self.assertEqual(exit_code, 0)
        self.assertEqual(process.call_count, 2)
        self.assertEqual(process.call_args_list[0].args[0], [
            *prefix, str(self.compiler), "/nologo", "/c", "/TC", "/O1",
            "/Focandidate.obj", "candidate.c",
        ])
        self.assertEqual(report["code_match_percent"], 87.5)
        self.assertEqual(report["compiler_output"], "compiler output")

    def test_windows_launches_compiler_directly_even_with_wibo_configured(self):
        self.assert_success(*self.run_evaluation("win32", {"WIBO": "unused-wrapper"}), [])

    def test_linux_uses_configured_wrapper(self):
        self.assert_success(*self.run_evaluation("linux", {"WIBO": "/wrapper tools/wibo"}),
                            ["/wrapper tools/wibo"])

    def test_linux_discovers_wibo_kinect(self):
        self.assert_success(*self.run_evaluation(
            "linux", which=lambda name: "/tools/wibo-kinect" if name == "wibo-kinect" else None,
        ), ["/tools/wibo-kinect"])

    def test_linux_falls_back_to_wibo(self):
        self.assert_success(*self.run_evaluation("linux"), ["wibo"])

    def test_linux_discovers_standard_wibo(self):
        self.assert_success(*self.run_evaluation(
            "linux", which=lambda name: "/tools/wibo" if name == "wibo" else None,
        ), ["/tools/wibo"])

    def test_compile_failure_is_saved_without_running_objdiff(self):
        exit_code, report, process = self.run_evaluation("win32", compile_exit_code=2)
        self.assertEqual(exit_code, 1)
        self.assertEqual(process.call_count, 1)
        self.assertEqual(report["compile_exit_code"], 2)
        self.assertEqual(report["compiler_output"], "compiler output")
        self.assertNotIn("objdiff_exit_code", report)


if __name__ == "__main__":
    unittest.main()
