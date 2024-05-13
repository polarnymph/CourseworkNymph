#include "ForXml.h"



//void ExtractNodeNames(XmlNode^ node, List<String^>^ nodeNames) {
//    for each (XmlNode ^ child in node->ChildNodes) {
//        if (child->NodeType == XmlNodeType::Element) {
//            nodeNames->Add(child->Name);
//        }
//    }
//}
//
//List<String^>^ GetNodeNames(String^ filePath) {
//    List<String^>^ nodeNames = gcnew List<String^>();
//
//    XmlDocument^ doc = gcnew XmlDocument();
//    try {
//        doc->Load(filePath);
//
//        XmlNode^ root = doc->DocumentElement;
//        ExtractNodeNames(root, nodeNames);
//    }
//    catch (Exception^ e) {
//        Console::WriteLine("Error loading XML file: " + e->Message);
//    }
//    return nodeNames;
//}
//
//
//bool IsExist(String^ nodeName) {
//    XmlDocument^ doc = gcnew XmlDocument();
//    doc->Load("table.xml");
//
//    DataSet^ Set = gcnew DataSet();
//    Set->ReadXml("table.xml");
//    if (doc->SelectSingleNode("/Tasks/" + nodeName) != nullptr) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}

//SortedSet<String^>^ GetDates(List<String^>^ nodeNames) {
//    SortedSet<String^>^ dates = gcnew SortedSet<String^>();
//    for each (String ^ node in nodeNames) {
//        if (node == "empty") {
//            continue;
//        }
//        String^ t = node->Remove(0, 4);
//        dates->Add(t);
//    }
//    return dates;
//}

String^ GetDiscriptionByAttribute(String^ nodeName, String^ attributeValue, String^ Path) {
    XmlDocument^ doc = gcnew XmlDocument();
    doc->Load(Path);

    String^ path = String::Format("//{0}[@{1}='{2}']", ("Art/" + nodeName), "���", attributeValue);

    String^ node = doc->SelectSingleNode(path)->InnerText->ToString();
    return node;
}

String^ GetImageByAttribute(String^ nodeName, String^ attributeValue, String^ Path) {
    XmlDocument^ doc = gcnew XmlDocument();
    doc->Load(Path);

    String^ path = String::Format("//{0}[@{1}='{2}']", ("Art/" + nodeName), "���", attributeValue);

    XmlAttributeCollection^ attributes = doc->SelectSingleNode(path)->Attributes;
    for each (XmlAttribute ^ attribute in attributes) {
        if (attribute->Name->ToString() == "pic") {
            String^ a = attribute->Value;
            return a;
        }
    }  
}
//
//void AddNode(String^ nodeName, String^ name, String^ description, String^ priority) {
//
//    List<String^>^ attributes = gcnew List<String^>();
//
//
//    XmlDocument^ doc = gcnew XmlDocument();
//    doc->Load("table.xml");
//
//    for each (XmlNode ^ node in doc->DocumentElement->ChildNodes) {
//        if (node->Name == nodeName) {
//            XmlAttribute^ attribute = dynamic_cast<XmlElement^>(node)->GetAttributeNode("id");
//            if (attribute != nullptr) {
//                attributes->Add(attribute->Value);
//            }
//        }
//    }
//
//    attributes->Sort();
//
//    XmlElement^ foo = doc->CreateElement(nodeName);
//    XmlElement^ bar = doc->CreateElement("��������");
//    bar->InnerText = name;
//    foo->AppendChild(bar);
//
//    XmlElement^ bar1 = doc->CreateElement("����������");
//    bar1->InnerText = description;
//    foo->AppendChild(bar1);
//
//    XmlElement^ bar2 = doc->CreateElement("���������");
//    bar2->InnerText = priority;
//    foo->AppendChild(bar2);
//
//    XmlElement^ bar3 = doc->CreateElement("������");
//    bar3->InnerText = "�� ���������";
//    foo->AppendChild(bar3);
//    int s = 0;
//    if (attributes->Count > 0) {
//        s = Convert::ToInt32(attributes[attributes->Count - 1]) + 1;
//    }
//
//
//    foo->SetAttribute("id", (s.ToString()));
//
//    doc->DocumentElement->AppendChild(foo);
//    doc->Save("table.xml");
//}
//
//void ChangeNode(String^ nodeName, String^ name, String^ description, String^ priority, String^ attributeValue)
//{
//    XmlDocument^ doc = gcnew XmlDocument();
//    doc->Load("table.xml");
//
//    String^ path = String::Format("//{0}[@{1}='{2}']", ("Tasks/" + nodeName), "id", attributeValue);
//
//    XmlNode^ node = doc->SelectSingleNode(path);
//
//
//    node->SelectSingleNode("��������")->InnerText = name;
//    node->SelectSingleNode("����������")->InnerText = description;
//    node->SelectSingleNode("���������")->InnerText = priority;
//
//    doc->Save("table.xml");
//}
//
//void ChangeStatus(String^ nodeName, String^ attributeValue, String^ status) {
//    XmlDocument^ doc = gcnew XmlDocument();
//    doc->Load("table.xml");
//
//    String^ path = String::Format("//{0}[@{1}='{2}']", ("Tasks/" + nodeName), "id", attributeValue);
//
//    XmlNode^ node = doc->SelectSingleNode(path);
//
//    node->SelectSingleNode("������")->InnerText = status;
//
//    doc->Save("table.xml");
//}
