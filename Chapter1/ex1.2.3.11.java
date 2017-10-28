import javax.script.*;
class Main {
    public static void main(String[] args) throws Exception {
        ScriptEngineManager factory = new ScriptEngineManager();
        ScriptEngine engine = factory.getEngineByName("JavaScript");
        Object obj = engine.eval("3 + (8 - 7.5) * 10 / 5 - (2 + 5 * 7)");
        System.out.println( obj );
    }
}